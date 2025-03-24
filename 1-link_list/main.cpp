

#include <iostream>

using namespace std;
class node{//basic bulding block
public:
    //[date,pointer]
    int data;//we can use Template instead of int
    node *next; // pointer to next node


};
//to know where is my list start & end

class SLL{//singly link list
public:
    node *head=nullptr;// head ->null [start node]
    node *tail=nullptr;// tail ->null  [end node]

//function to add th last
void addToLast(int x){
node *n=new node; //create new node everyTime i called function
n->data=x;
n->next=nullptr;  //[int x ,null


//check if link list empty
if(head == nullptr){
    head=n;//head and tail pointer to node
    tail=n;
}else{
tail->next=n; //old node(tail->next)  [data, n ]
tail=n;        //pointer to new last node

}

}

//print
void print(){
node *p=head; //create new pointer , in the first link list
while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next; // reDirect pointer
    }cout<<endl<<"************"<<endl;
}
};
int main()
{
    SLL myList; //define empty link list
    myList.addToLast(5);
    myList.print();
    myList.addToLast(7);
    myList.print();
    myList.addToLast(-9);
    myList.print();
}


