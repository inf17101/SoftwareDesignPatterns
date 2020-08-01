#ifndef __VISITVARIABLENODE_HEADER__
#define __VISITVARIABLENODE_HEADER__

#include "Visitor.hpp"
class AddOperationNode;
class VariableNode;

class VisitVariableNode : public Visitor
{
    public:
        virtual void visitAddOperationNode(AddOperationNode* ) override;
        virtual void visitVariableNode(VariableNode* ) override;

};

#endif