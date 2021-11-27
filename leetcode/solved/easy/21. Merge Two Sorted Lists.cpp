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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr) return nullptr;
        else if(l1==nullptr && l2!=nullptr) return l2;
        else if(l1!=nullptr && l2==nullptr) return l1;
        
        ListNode*tmp = new ListNode();
        ListNode*head = tmp;
        
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val < l2->val){
                tmp->next = new ListNode(l1->val);
                tmp = tmp->next;
                l1 = l1->next;
                // cout<< "l1"<< " ";
                if(l1 == nullptr){
                    while(l2 != nullptr){
                        tmp->next = new ListNode(l2->val);
                        tmp = tmp->next;
                        l2 = l2->next;
                        // cout<< "l2"<< " ";
                    }
                }
            }
            else{
                tmp->next = new ListNode(l2->val);
                tmp = tmp->next;
                l2 = l2->next;
                // cout<< "l2"<< " ";
                if(l2 == nullptr){
                    while(l1 != nullptr){
                        tmp->next = new ListNode(l1->val);
                        tmp = tmp->next;
                        l1 = l1->next;
                        // cout<< "l1"<< " ";
                    }
                }
            }
        }
        return head->next;
    }
};
