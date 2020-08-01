#include "OperationNode.hpp"

OperationNode::OperationNode(VariableNode* l, VariableNode* r) : left_(l), right_(r) {}

OperationNode::~OperationNode()
{
    delete left_;
    delete right_;
}