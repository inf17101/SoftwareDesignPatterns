
#include <iostream>
#include <memory>
#include "VisitAddOperationNode.hpp"
#include "VisitVariableNode.hpp"
#include "AddOperationNode.hpp"
#include "VariableNode.hpp"

int main()
{
    auto addOpNode = std::make_unique<AddOperationNode>(new VariableNode(1), new VariableNode(2));
    auto varNode = std::make_unique<VariableNode>(1);
    
    auto vAddOpNode = std::make_unique<VisitAddOperationNode>();
    addOpNode->accept(vAddOpNode.get());

    auto vVarNode = std::make_unique<VisitVariableNode>();
    varNode->accept(vVarNode.get());
    return 0;
}