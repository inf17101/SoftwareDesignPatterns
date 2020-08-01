#ifndef __NODE_HEADER__
#define __NODE_HEADER__

#include <string>
class Visitor;

class Node
{
    public:
        virtual void accept(Visitor* visitor) = 0;
        virtual ~Node() = default;
};

#endif