class Node{
     public:
          Node();
          Node(int);
          ~Node();
          void setData(int);
          void setNextPtr(Node*);
          int getData();
          Node* getNextPtr();
          
            
     private:       
          int data;
          Node* nextPtr;
};
