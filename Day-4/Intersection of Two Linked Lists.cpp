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
        set<ListNode *> visited;
        while(headA != NULL || headB !=NULL)
        {
            if(visited.find(headA) == visited.end())
            {
                if(headA != NULL)
                {
                visited.insert(headA);
                headA = headA->next;
                }
            }
            
            else
            {
                
                return headA;
            }
           
            
            if(visited.find(headB) == visited.end())
            {
                if(headB != NULL)
                {
                visited.insert(headB);
                headB = headB->next;
                }
            }
            
            else
            {
                return headB;
            }
            
        }
        return NULL;
    }
};
//https://leetcode.com/submissions/detail/442538250/