#include "AddOperationNode.hpp"
#include "Visitor.hpp"

AddOperationNode::AddOperationNode(VariableNode* l, VariableNode* r) : OperationNode(l,r) {}

VariableNode AddOperationNode::calculate()
{
    return *left_ + *right_;
}

void AddOperationNode::accept(Visitor* visitor)
{
    left_->accept(visitor);
    right_->accept(visitor);
    visitor->visitAddOperationNode(this);
}

