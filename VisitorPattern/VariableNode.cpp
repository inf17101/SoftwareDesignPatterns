#include "VariableNode.hpp"
#include "Visitor.hpp"

VariableNode::VariableNode(const int value) : value_(value) {}

int VariableNode::getValue() const
{
    return value_;
}

void VariableNode::accept(Visitor* visitor)
{
    visitor->visitVariableNode(this);
}

VariableNode VariableNode::operator+(const VariableNode& other)
{
    return VariableNode(value_ + other.getValue());
}

