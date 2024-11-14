#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
  struct ParseIRPass : public ModulePass {
    static char ID;
    ParseIRPass() : ModulePass(ID) {}

    bool runOnModule(Module &M) override {
      errs() << "Parsing LLVM IR for Module: " << M.getName() << "\n";

      // Iterate through each function
      for (Function &F : M) {
        if (F.isDeclaration()) {
          // Skip function declarations
          continue;
        }

        errs() << "Function: " << F.getName() << "\n";

        // Iterate through basic blocks in the function
        for (BasicBlock &BB : F) {
          errs() << "  Basic Block:\n";

          // Iterate through instructions in the basic block
          for (Instruction &I : BB) {
            errs() << "    " << I.getOpcodeName(); // Print opcode name (add, mul, store, load, etc...)
            
            if (auto *binaryOp = dyn_cast<BinaryOperator>(&I)) {
              errs() << " (Binary Operator: ";
              binaryOp->getOperand(0)->print(errs());
              errs() << ", ";
              binaryOp->getOperand(1)->print(errs());
              errs() << ")";
            }
            errs() << "\n";
          }
        }
      }
      return false;
    }
  };
}

char ParseIRPass::ID = 0;
static RegisterPass<ParseIRPass> X("parseIR", "Parse and Index LLVM IR",
                                   false /* Only looks at CFG */,
                                   false /* Analysis Pass */);
