#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class Queue{
public:
    Node *Front=nullptr;
    Node *Back=nullptr;
    int size=0;

    bool isEmpty(){
        return Front==nullptr;
    }

    void push(int x){
        Node *n=new Node;
        n->next=nullptr;
        n->data=x;
        if(isEmpty()){
            Front=n;
            Back=n;
            size++;
        }
        else{
           Back->next=n;
           Back=n;
           size++;
        }

    }

    void pop(){
       if(isEmpty()) cout<<"Empty"<<endl;
       else if(Front==Back){
          Node *p=Front;
          Front=Back=nullptr;
          delete p;
          size--;
       }
       else{
         Node *p=Front;
         Front=Front->next;
         delete p;
         size--;
       }
    }

    int front(){
        return Front->data;
    }

    int back(){
        return Back->data;
    }

    int getSize(){
        return size;
    }
};
int main()
{
    Queue q;
    q.push(10);
  //  cout<<q.front()<<" "<<q.back()<<endl;
    q.push(20);
  //  cout<<q.front()<<" "<<q.back()<<endl;
    q.push(30);
  //  cout<<q.front()<<" "<<q.back()<<endl;
  /*  q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;*/
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}
