#ifndef __OPERATIONNODE_HEADER__
#define __OPERATIONNODE_HEADER__
#include "VariableNode.hpp"

class OperationNode
{
    public:
        OperationNode(VariableNode* l, VariableNode* r);
        virtual ~OperationNode();

    VariableNode* left_;
    VariableNode* right_;
};

#endif