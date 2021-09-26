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
    int getDecimalValue(ListNode* head) {
        string x ="";
        while(head->next){
            x = x + to_string(head->val);
            head = head->next;
        }
        x = x + to_string(head->val);
        int mul =1;
        int res =0;
        
        for(int i = x.size()-1; i>=0;i--){
            res += ((x[i]-'0') * mul);
            mul*=2;
        }
        return res;
    }
};
