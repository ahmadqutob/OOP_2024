#include <iostream>

using namespace std;
//solution one without counter
//solution two with counter
int main()
{

    /*

    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode *a=headA;
       ListNode *b=headB;
       while(a!=b){
        if(a==nullptr){
            a=headB;
        }else{
            a=a->next;
        }
       if(b==nullptr){
            b=headA;
        }else{
            b=b->next;
        }

       }
        return a;
    }
};
    */




    /*


    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int counta=0, countb=0;
        ListNode* ha = headA;
        ListNode* hb = headB;
        while (ha != nullptr) {
            counta++;
            ha = ha->next;
        }
        while (hb != nullptr) {
            countb++;
            hb = hb->next;
        }
        int diff = abs(counta - countb);
        ListNode*  a=headA;
        ListNode* b=headB;
        if (counta > countb) {
            while (diff--) a = a->next;

        } else if (countb > counta) {
            while (diff--)   b = b->next;

        }

        while (a != b) {
            a = a->next;
            b = b->next;
        }
        return a;
    }
};



    */
}
