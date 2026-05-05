/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //converting to circular ll and then back to single ll
        if(!head || !head->next || k==0) return head;

        int n =1;
        ListNode*tail=head;
        while(tail->next){
            tail = tail->next;
            n++;
        } //counting no of nodes
        tail-> next = head;
        k=k%n;
        int steps = n-k-1;
        ListNode*newtail = head;
        while(steps--){
            newtail = newtail->next;
        }
        ListNode*newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
    }
};
