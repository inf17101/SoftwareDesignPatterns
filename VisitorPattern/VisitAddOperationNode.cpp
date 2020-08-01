#include "VisitAddOperationNode.hpp"
#include "AddOperationNode.hpp"
#include <iostream>

void VisitAddOperationNode::visitAddOperationNode(AddOperationNode* addOpNode)
{
    auto opNode = addOpNode->calculate();
    std::cout << "Found AddOperationNode and calculated result: " << opNode.getValue() << std::endl;
}

void VisitAddOperationNode::visitVariableNode(VariableNode* varNode) {}
