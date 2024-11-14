#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
class ParseIRPass : public ModulePass {
public:
    static char ID;
    ParseIRPass() : ModulePass(ID) {}

    bool runOnModule(Module &M) override {
        int index = 1;

        errs() << "Parsing and Indexing LLVM IR...\n";

        // Iterate through all functions in the module
        for (Function &F : M) {
        if (F.isDeclaration())
            continue;

        errs() << "Function: " << F.getName() << "\n";

        // Iterate through each basic block in the function
        for (BasicBlock &BB : F) {
            if (!BB.hasName()) {
            BB.setName("block_" + std::to_string(index));
            }

            errs() << "Block: " << BB.getName() << "\n";

            // Iterate through instructions in the basic block
            for (Instruction &I : BB) {
            // Print the index and the instruction
            errs() << index++ << ": " << I << "\n";
            }
        }
        }
        return false;
    }

    void print(raw_ostream &O, const Module *M) const override {
    }

};
} 

char ParseIRPass::ID = 0;
static RegisterPass<ParseIRPass> X("parseIR", "Parse and Index LLVM IR", false, false);
