#include "node.h"


Node::Node()
{
    data = 0;
    nextPtr = 0;
            
}
Node::Node(int d)
{
    data = d;
    nextPtr = 0;
}
Node::~Node()
{
;    
}
void Node::setData(int d)

{
     data = d;
}
void Node::setNextPtr(Node* n)
{
     nextPtr = n;
}
int Node::getData()
{
    return data;    
}
Node* Node::getNextPtr()
{
    return nextPtr;
}
