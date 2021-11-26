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

// long long makenum (ListNode* x){
//     long long res = 0;
//     long long ten = 1;
//         while(1){
//             res+= ten*(x->val);
//             if(x->next == nullptr) break;
//             x= x->next;
//             ten*=10;
//         }
//     cout << res << endl;
//     return res;
// }

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // long long output = makenum(l1) +makenum(l2);
        // cout<< output;
        ListNode*res = new ListNode(0);
        ListNode*tmpres = res;
        int num = 0;
        while(1){
            if(l1==nullptr && l2==nullptr) break;
            int l1num =0;
            if(l1!=nullptr){
                l1num = l1->val;
                l1 = l1->next;
            }
            int l2num =0;
            if(l2!=nullptr){
                l2num = l2->val;
                l2 = l2->next;
            }
            int tmpnum = l1num+l2num + num;
            // cout << tmpnum << " ";
            if(tmpnum >=10){
                num=1;
                tmpnum-=10;
            }
            else num=0;
            tmpres->next = new ListNode(tmpnum);
            tmpres = tmpres->next;
            if(l1==nullptr && l2==nullptr && num ==1){
                tmpres->next = new ListNode(num);
            }
            
        }
        return res->next;
    }
};
