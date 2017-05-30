#include <iostream>
//#include "queue.h"
#include "stack.h"
using namespace std;

int main(int argc, char *argv[])
{
    try{
    Stack s;
    s.push(22);
//    s.push(32);
//    s.push(14);
//    s.push(16);
    cout << s.pop() << endl;    
    cout << s.pop() << endl;        
    }
    catch (const char* msg){
          cout << msg << endl;
    }
                
    
    
    
    
    
    
//    try
//    {
//        Queue q1;
//        q1.print();                
//        q1.enqueue(12);
//        q1.enqueue(15);
//        q1.enqueue(11);
//        q1.enqueue(25);        
//        q1.print();        
//        q1.dequeue();
//        q1.print();        
        //cout << q1.dequeue() << endl;
        //cout << q1.dequeue() << endl;
//    }
//    catch(const char* str)
//    {
//      //cout << "Unknown Exception..!" << endl;
//      cout << str << endl;
//    }
    system("PAUSE");
    return 0;
}
