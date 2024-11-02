#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include <string>
#include <fstream>
#include <unordered_map>
#include <set>
#include <queue>

using namespace llvm;
using namespace std;

#define DEBUG_TYPE "SSAConstantPropagation"

namespace
{


struct SSAConstantPropagation : public FunctionPass
{
  static char ID;
  SSAConstantPropagation() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override
  {

    return true; // Indicate this is a Transform pass
  }
}; // end of struct SSAConstantPropagation
} // end of anonymous namespace

char SSAConstantPropagation::ID = 0;
static RegisterPass<SSAConstantPropagation> X("SSAConstantPropagation", "SSAConstantPropagation Pass",
                                      false /* Only looks at CFG */,
                                      true /* Tranform Pass */);
