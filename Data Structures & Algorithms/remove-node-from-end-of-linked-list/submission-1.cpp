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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newHead = reverse(head);
        if (n == 1) {
            ListNode* dummy = newHead;
            newHead = newHead->next;
            delete dummy;
            return reverse(newHead);
        }
        ListNode* temp=newHead;
        for(int i=0;i<n-2;i++){
            temp=temp->next;
        }
        ListNode* dummy=temp->next;
        temp->next=temp->next->next;
        delete dummy;
        return reverse(newHead);
    }
};
