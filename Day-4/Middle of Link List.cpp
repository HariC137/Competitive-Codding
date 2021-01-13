//https://leetcode.com/submissions/detail/442443541/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        int ctr = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            ctr++;
        }
        //cout<<ctr;
            int from = (ctr/2);
        //cout<<from;
        ctr = 0 ;
        while(head != NULL)
        {
            if(ctr >= from)
            {
              return head;  
            }
            head = head->next;
            ctr++;
        }
        return head;
    }
};