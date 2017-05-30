#include <iostream>
using namespace std;
#include "stack.h"
Stack::Stack()
{
    first = top =0;          
}
Stack::~Stack()
{
    ;           
}
void Stack::push(int d)
{
     Node*temp = new Node(d);
     if (first)
     {
         top->setNextPtr(temp);
         top = temp;
     }
     else
     {
         first = top = temp;
     }
}
int Stack::pop()
{
    if (first)
    {
        if (first == top)
        {
            int data = top->getData();
            delete top;
            first = top = 0;
            return data;      
        }
                  
        else
        {
          int data = top->getData();
          Node*temp = getPreTop();      
          delete top;
          top = temp;
          return data;
        }
    }
    else{
         throw "The stack is empty!";
    }

}


Node* Stack::getPreTop()
{
      Node* temp = first;
      while (temp -> getNextPtr() != top)
      {
            temp = temp -> getNextPtr();
      }
      return temp;
}
