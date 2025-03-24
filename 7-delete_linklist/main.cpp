#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class SLL
{
public:
    Node *head=nullptr;
    Node *tail=nullptr;

    void addToLast(int x)  //add at LL last
    {
        Node *n=new Node;
        n->data=x;
        n->next=nullptr;

        // empty
        if(head==nullptr)
        {
            head=n;
            tail=n;
        }
        else
        {
            Node *p=head;
            while(p->next!=nullptr)
            {
                p=p->next;
            }
            p->next=n;
        }
    }


    void addAtBegining(int x)  //add LL at begining
    {
        Node *n=new Node;
        n->data=x;
        n->next=nullptr;

        if(head==nullptr)
        {
            head=n;
            tail=n;
        }
        else
        {
            n->next=head;//pointer to head;
            head=n;//change pointer area



        }

    }



    void print()
    {
        Node *p=head;
        while(p!=nullptr)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl<<"============="<<endl;
    }


    //delete functions


    void deleteElement(int x){
        Node * target=searchh(x);

        if(target==nullptr){ // if number is within ll
            cout<<" Not Found "<<endl;
        }else if(target == head){ // if number the first ll
        head=head->next;
        delete target;
        }else{
        Node *prev= head;
        while(prev->next != target){
            prev=prev->next;
        }
        prev->next=target->next;
        delete target;
        }
    }
    void deletefromBegining()
    {
        if(head == nullptr)
        {
            cout<<"empty list "<<endl;
        }
        else
        {
            Node *p=head;
            head=head->next;
            delete p ;
        }

    }

    void deleteFromEnd()
    {
        if(head == nullptr)
        {
            cout<<" empty list"<<endl;
        }
        else
        {
            Node *ptr=nullptr;
            Node *target=head;
            while(target->next !=nullptr)
            {
                ptr=target;         //[head,ptr,target]
                target=target->next;
            }
            if(ptr == nullptr)//it doesnt change
            {
                head=nullptr;
            }
            else
            {
                ptr->next=nullptr;
            }
            delete target;

        }
    }


    Node * searchh(int x)
    {
        Node *p=head;
        Node *target=nullptr;
        while(p  != nullptr)
        {
            if(p->data == x)
            {
                target=p;
                break;
            }
            p=p->next;
        }
        return target;
    }



    void addAfter(int e,int x)
    {
        Node *p=head;
        while(p != nullptr)
        {
            if(p->data == e)
            {
                Node *n=new Node;
                n->data=x;
                n->next=p->next;
                p->next=n;
                //break; // stop at the first element
                p=n->next;
            }
            else
            {
                p=p->next;
            }
        }
        if(p == nullptr)cout<<" Element Not Found "<<endl;

    }
    void addBefor(int x,int y)
    {
        Node *p= searchh(x);
        Node *prev= head;
        Node *n= new Node;
        n->data=y;
        n->next=nullptr;
        if(p== nullptr)cout<<" Not Found "<<endl; //if empty ll
        if(p==head)
        {
            n->next=head;
            head=n; // if there is one node in ll
        }
        else
        {
            while(prev->next != p)
            {
                prev=prev->next;
            }
            n->next=p;
            prev->next=n;
        }
    }
        //task 1  addAfterRepetation
    void addAfterRepetation(int x)
    {
        Node *p=head->next;
        Node *prev=head;
        while(p !=nullptr)
        {
            if(prev->data == p->data)
            {
                //repitation
                prev=prev->next;
                p=p->next;
                Node *n=new Node;
                n->data=x;
                n->next=p;
                prev->next=n;
                break;
            }
            p=p->next;
            prev=prev->next;

        }

    }
    //task 2 delete Element(40)
    void deleteElement2(int x){
    Node *p=head;
    Node *prev=head;
    while(p != searchh(x)){
        while(prev->next != p){

        prev=prev->next;
        }
            if(p->next ==nullptr)delete p;prev->next=nullptr;
            if(head == searchh(x))head= head->next;delete p;
            Node *s=p->next;
            prev->next=s;
            delete p;
            break;
    }
    }
    void deleteAll(){
        Node * p=head;
        while(p != nullptr){
            Node *temp=p->next;
            delete p;
            p=temp;
        }
        head=p;
        cout<< "deleted !"<<endl;
    }

    void checkRepitation(int x){
    Node *p=head;
    Node *prev=head;
    while(p != nullptr){

        if(p->data==x && prev->data==x){
            cout<<"ripitation";
        }
    }
    prev=p;
    p=p->next;
    }
};
int main()
{
    SLL myList;
    myList.deletefromBegining();
    myList.addAtBegining(10);
    myList.addAtBegining(20);
    myList.addAtBegining(30);
    myList.addAtBegining(20);
    myList.addAtBegining(40);
    myList.addAfter(20,66);
    myList.print();
    myList.addBefor(20,16);
    myList.print();//40 20 66 30 16 20 66 10
    myList.addBefor(66,77);
     myList.print();
    myList.addAfterRepetation(15);
    myList.print();

    myList.deleteElement(30);
    myList.print();
    myList.deleteAll();
    myList.print();

}
