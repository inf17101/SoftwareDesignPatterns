#ifndef __VISITADDOPERATIONNODE_HEADER__
#define __VISITADDOPERATIONNODE_HEADER__

#include "Visitor.hpp"
class AddOperationNode;
class VariableNode;

class VisitAddOperationNode : public Visitor
{
    public:
        virtual void visitAddOperationNode(AddOperationNode* ) override;
        virtual void visitVariableNode(VariableNode* ) override;

};

#endif