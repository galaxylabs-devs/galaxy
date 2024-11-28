#include "../../../../../include/parser/printer/nodes/print_property.h"
#include "../../../../../include/parser/printer/visited.h"
#include "../../../../../include/ast/definitions.h"

void print_property(const AstNode *node, int depth, VisitedNodes *visited) {
  PropertyNode *property = (PropertyNode *)node->data;
  if (property) {
    print_indent(depth + 1);
    
    if (property->key) {
      printf("Key: %s\n", property->key);
    } else {
      printf("Key: <NULL>\n");
    }

    if (property->value) {
      print_ast_node(property->value, depth + 2, visited);
    } else {
      print_indent(depth + 2);
      printf("Value: <NULL>\n");
    }
  } else {
    print_indent(depth + 1);
    printf("Property: <NULL>\n");
  }
}