#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top=nullptr;
    int size=0;

//add stack at end
    void push(int x)
    {
        Node *n=new Node;
        n->data=x;
        n->next=nullptr;

        if(top == nullptr)  //it was empty
        {
            top=n;
            size++;
        }
        else
        {
            n->next=top;
            top=n;
            size++;
        }

    }


void pushAtEnd(int x)
{
    Node *n = new Node;
    n->data = x;
    n->next = nullptr;

    if (top == nullptr) // If the stack is empty
    {
        top = n; // The new node becomes the top
    }
    else
    {
        Node *temp = top;
        while (temp->next != nullptr) // Traverse to the end of the stack
        {
            temp = temp->next;
        }
        temp->next = n; // Append the new node at the end
    }
    size++; // Increment the size of the stack
}




    //if LL is empty return true
    bool isEmpty(){
    return top==nullptr;
    }

    int getSize(){ //return stack size
    return size;
    }
    int Top(){ //return top VALUE
    return top->data;
    }
    void pop(){
    Node *p=top;
    top=top->next;
    delete p;
    size --;
    }
};
int main()
{
   Stack stk;
   stk.pushin(10);
   stk.push(20);
   stk.push(30);
   stk.push(40);
   cout<<"Size "<<stk.getSize()<<endl;
   cout<<"top value "<<stk.Top()<<endl;
   //print Top and delete stack Nodes
   while ( !stk.isEmpty()){
    cout<<stk.Top()<<" ";
    stk.pop();
   }
}
