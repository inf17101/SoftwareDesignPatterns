#include "VisitVariableNode.hpp"
#include <iostream>
#include "VariableNode.hpp"

void VisitVariableNode::visitVariableNode(VariableNode* varNode)
{
    std::cout << "found VariableNode with value: " << varNode->getValue() << std::endl;
}

void VisitVariableNode::visitAddOperationNode(AddOperationNode* addOpNode) {}