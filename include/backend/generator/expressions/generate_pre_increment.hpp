#ifndef GENERATE_PRE_INCREMENT_H
#define GENERATE_PRE_INCREMENT_H

extern "C" {
  #include "frontend/ast/definitions.h"
}
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/IRBuilder.h>

llvm::Value *generate_pre_increment(PreIncrementExpr *node, llvm::LLVMContext &Context, llvm::IRBuilder<> &Builder);

#endif // GENERATE_PRE_INCREMENT_H