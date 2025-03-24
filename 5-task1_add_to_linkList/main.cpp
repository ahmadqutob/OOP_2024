 #include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class SLL{
public:
    Node *head=nullptr;
    Node *tail=nullptr;

    void addToLast(int x){
        Node *n=new Node;
        n->data=x;
        n->next=nullptr;

        // empty
        if(head==nullptr){
            head=n;
            tail=n;
        }
        else{
           Node *p=head;
           while(p->next!=nullptr){
              p=p->next;
           }
           p->next=n;
        }
    }


    void addAtBegining(int x){
     Node *n=new Node;
        n->data=x;
        n->next=nullptr;

     if(head==nullptr){
            head=n;
            tail=n;
        }else{
         n->next=head;//pointer to head;
         head=n;//change pointer area



        }

    }


//function to add th last
void addAfter(int x,int y){
Node *n=new Node; //create new node everyTime i called function
n->data=y;
n->next=nullptr;  //[int x ,null


//check if link list empty
if(head == nullptr){
    head=n;//head and tail pointer to node
    tail=n;
}else{
   Node *p=head;
   while(p->data != x){
    p=p->next;
   }
    n->next=p->next;
    p->next=n;
}

}


    void print(){
       Node *p=head;
       while(p!=nullptr){
          cout<<p->data<<" ";
          p=p->next;
       }
       cout<<endl<<"============="<<endl;
    }


};
int main()
{
   SLL myList;
   myList.addToLast(5);
   myList.print();
   myList.addToLast(7);
   myList.print();
   myList.addToLast(-9);
   myList.print();
   //add at begining
   myList.addAtBegining(6);
   myList.print();
   myList.addAfter(6,33);
   myList.print();

}
