#include <iostream>
//https://leetcode.com/problems/reverse-linked-list/solutions/5612752/step-by-step-explained-with-images-easiest-to-understand-java-c-python-javascript-go-codes
using namespace std;

class linkNode{
public:
    int val;
    linkNode * next;
    //constructor
    linkNode():val(0),next(nullptr){};
    linkNode(int x):val(x),next(nullptr){};
    linkNode(int x,linkNode * next):val(x),next(next){};

    };

class solution{
public:
    linkNode * reverseList(linkNode* head){
        linkNode* prev= nullptr;
        linkNode* curr= head;
        while(curr != nullptr){
            linkNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
    head = prev;
    return head;

    }

    //function to print linklist
    void printList(linkNode* head){
        linkNode* temp= head;
        while(temp !=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    };
int main(){
    linkNode* head= new linkNode(1);
    head->next=new linkNode(2);
    head->next->next=new linkNode(3);
    head->next->next->next=new linkNode(4);

   solution s;
    s.printList(head);
       linkNode* newHead = s.reverseList(head);

    // Print the reversed list
    cout << "Reversed list: ";
    s.printList(newHead);

    return 0;

}


