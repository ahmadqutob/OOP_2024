#include <iostream>

using namespace std;
class  Node
{
public:
    // [prev | data | next]
    Node *next=nullptr;
    Node *prev=nullptr;
    int data;
};

class DLL
{
public:
    Node *head=nullptr;
    Node *tail=nullptr;

    //add
    void add(int x)
    {
        Node *n=new Node;
        n->data=x;
        n->next=nullptr;
        n->prev=nullptr;
        if(head == nullptr) //add first l
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            n->prev=tail;
            tail=n;
        }

    }


    void print()
    {
        Node *p=head;
        while(p != nullptr)
        {
            cout<< p->data<<" ";
            p=p->next;
        }
        cout<<endl<<"================="<<endl;
    }
    void printReversr()
    {
        Node *p=tail;
        while( p != nullptr)
        {
            cout<< p->data<<" ";
            p=p->prev;
        }

    }
    void DeleteElement(int x){
    //delete first node
    if(head == tail && head->data==x){
        Node *p=head;
        head=nullptr;
        tail=nullptr;
        delete p;
        return ;
    }
    //delete from the first Node
    if(head->data == x){
        Node *p=head;
        head=head->next;
        head->prev=nullptr;
        delete p;
        return ;
    }
    //delete Last Node
    if(tail->data == x){
        Node *p=tail;
        tail=tail->prev;
        tail->next=nullptr;
        delete p;
        return ;
    }
    //delete from the middle list
    Node *p=head;
    while(p != nullptr){
        if(p->data ==x){

            p->prev->next= p->next;
            p->next->prev=p->prev;
            delete p;
            return ;
        }
        p=p->next;
    }
    }
};
int main()
{
    DLL List;
    List.add(10);
    List.print();
    List.add(20);
    List.print();

    List.add(30);
    List.print();

    List.DeleteElement(30);
    List.print();

}
