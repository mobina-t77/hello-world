#include "node.h"
class Queue{
      public:
            Queue();
            ~Queue();
            void enqueue(int) ;
            int dequeue();
            void print();
      private:
            Node* first;
            Node* last;  
      
};  
