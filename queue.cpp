#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    first = last =0;          
}
Queue::~Queue()
{
       ;               
}
void Queue::enqueue(int d)
{
    Node* temp = new Node(d);
    if (0 == first)
    {
        first = last = temp;  
    }
    else
    {
        last -> setNextPtr(temp);
        last = temp;
    }
}
int Queue::dequeue()
{
    if(first)
    {
        Node* temp = first;
        first = first -> getNextPtr();
        int dTemp = temp -> getData();
        delete temp;
        if (0 == first)
        {
              last = 0;
        }
           
        return dTemp;
    } 
    else
    {
        throw "The Queue is empty..!";
    } 
}
void Queue::print()
{
     if (first){
         Node* temp = first;       
         while(temp){
              cout << temp->getData() << " ";
              temp = temp->getNextPtr();
         }
         cout << "\n";
     }
     else{
          cout << "The Queue is empty..!" << endl;
     }
     
}
