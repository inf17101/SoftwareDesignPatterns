#ifndef __VARIABLENODE_HEADER__
#define __VARIABLENODE_HEADER__

#include "node.hpp"

class VariableNode : public Node
{
    public:
        VariableNode(const int value);
        virtual void accept(Visitor* visitor) override;
        int getValue() const;
        VariableNode operator+(const VariableNode& other);

    int value_;
};

#endif