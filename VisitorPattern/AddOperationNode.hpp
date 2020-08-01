#ifndef __ADDOPERATIONNODE_HEADER__
#define __ADDOPERATIONNODE_HEADER__

#include "OperationNode.hpp"
#include "node.hpp"
#include "VariableNode.hpp"
class Visitor;


class AddOperationNode : public OperationNode, public Node
{
    public:
        AddOperationNode(VariableNode* l, VariableNode* r);
        virtual ~AddOperationNode() = default;
        VariableNode calculate();
        virtual void accept(Visitor* visitor) override;
};

#endif