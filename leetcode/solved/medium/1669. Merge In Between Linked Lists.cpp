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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* res = list1;
        ListNode* tmp = nullptr;

        while(list1->val != a-1) list1=list1->next;
        
        tmp = list1;
        
        while(tmp->val != b+1) tmp = tmp->next;
        
        list1->next = list2;
        
        while(list1->next != NULL) list1 = list1->next;
        
        list1->next = tmp;
        
        return res;
        
    }
};
