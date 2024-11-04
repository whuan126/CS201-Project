#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/CFG.h"
#include <string>

using namespace llvm;
using namespace std;

#define DEBUG_TYPE "HelloPass"

namespace
{
  struct HelloPass : public FunctionPass
  {
    static char ID;
    HelloPass() : FunctionPass(ID) {}

    bool runOnFunction(Function &F) override
{
    errs() << "HelloPass runOnFunction: ";
    errs() << F.getName() << "\n";

    int blockNumber = 1;
    for (auto &basic_block : F)
    {
        errs() << "Basic Block " << blockNumber << ":\n";

        // Print the number of predecessors
        int pred_count = 0;
        for (auto *pred : predecessors(&basic_block))
        {
            ++pred_count;
        }
        errs() << "  Number of Predecessors: " << pred_count << "\n";

        // Print the number of successors
        int succ_count = 0;
        for (auto *succ : successors(&basic_block))
        {
            ++succ_count;
        }
        errs() << "  Number of Successors: " << succ_count << "\n";

        ++blockNumber;
    }
    return false;
}

    void print(raw_ostream &O, const Module *M) const override {
        O << "Processed functions:\n";
        for (const auto &F : *M) {
            O << "  Function: " << F.getName() << "\n";
        }
      }
  }; // end of Hello pass
} // end of anonymous namespace

char HelloPass::ID = 0;
static RegisterPass<HelloPass> X("Hello", "Hello Pass",
                                 false /* Only looks at CFG */,
                                 false /* Analysis Pass */);