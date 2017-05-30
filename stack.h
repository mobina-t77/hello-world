#include "node.h"

class Stack{
      public:
         Stack();
         ~Stack();
         void push(int);
         int pop();

             
      private:
         Node* first;
         Node* top;
         Node* getPreTop();         
};
