
#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/Support/raw_ostream.h"
#include <unordered_map>

using namespace llvm;

namespace {

struct SSAConstantPropagation : public FunctionPass {
  static char ID;
  SSAConstantPropagation() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    std::unordered_map<Value *, Constant *> constantMap;
    int index = 1; 

    errs() << "Parsing and Indexing Instructions...\n";

    
    for (BasicBlock &BB : F) {
      errs() << "BasicBlock: " << BB.getName() << "\n";

      
      for (Instruction &I : BB) {
        
        errs() << index++ << ": " << I << "\n";

        if (StoreInst *SI = dyn_cast<StoreInst>(&I)) {
          if (ConstantInt *CI = dyn_cast<ConstantInt>(SI->getValueOperand())) {
            constantMap[SI->getPointerOperand()] = CI; 
            errs() << "Detected constant: " << *SI->getPointerOperand()
                   << " = " << CI->getValue() << "\n";
          }
        }

        for (unsigned i = 0; i < I.getNumOperands(); ++i) {
          Value *operand = I.getOperand(i);
          if (constantMap.count(operand)) {
            I.setOperand(i, constantMap[operand]);
            errs() << "Replaced operand: " << *operand
                   << " with constant: " << *constantMap[operand] << "\n";
          }
        }

        if (BranchInst *BI = dyn_cast<BranchInst>(&I)) {
          if (BI->isConditional()) {
            if (ICmpInst *CI = dyn_cast<ICmpInst>(BI->getCondition())) {
              if (ConstantInt *LHS = dyn_cast<ConstantInt>(CI->getOperand(0))) {
                if (ConstantInt *RHS = dyn_cast<ConstantInt>(CI->getOperand(1))) {
                  bool result = false;
                  switch (CI->getPredicate()) {
                  case ICmpInst::ICMP_SGT:
                    result = LHS->getValue().sgt(RHS->getValue());
                    break;
                  case ICmpInst::ICMP_SLT:
                    result = LHS->getValue().slt(RHS->getValue());
                    break;
                  case ICmpInst::ICMP_EQ:
                    result = LHS->getValue() == RHS->getValue();
                    break;
                  default:
                    break;
                  }

                  BI->setCondition(ConstantInt::get(Type::getInt1Ty(F.getContext()), result));
                  errs() << "Simplified branch condition to: " << (result ? "true" : "false") << "\n";
                }
              }
            }
          }
        }
      }
    }

    errs() << "----- Final Constant Values -----\n";
    for (auto &entry : constantMap) {
      errs() << *entry.first << " = " << *entry.second << "\n";
    }

    return true;
  }
};

} 

char SSAConstantPropagation::ID = 0;

static RegisterPass<SSAConstantPropagation>
    X("SSAConstantPropagation", "SSA Constant Propagation Pass",
      false ,
      true );
