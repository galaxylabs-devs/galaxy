#ifndef SYMBOL_STACK_H
#define SYMBOL_STACK_H

#include <string>
#include <unordered_map>
#include <stack>
#include <llvm/IR/Value.h>

using SymbolTable = std::unordered_map<std::string, llvm::Value*>;

extern std::stack<SymbolTable> symbol_stack;
void enter_scope(void);
void exit_scope(void);

#endif // SYMBOL_STACK_H