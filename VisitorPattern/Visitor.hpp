#ifndef __VISITOR_HEADER__
#define __VISITOR_HEADER__

class AddOperationNode;
class VariableNode;

class Visitor
{
    public:
        virtual ~Visitor() = default;
        virtual void visitAddOperationNode(AddOperationNode* ) = 0;
        virtual void visitVariableNode(VariableNode* ) = 0;
};

#endif