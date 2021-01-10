/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode* > address;
        //address.insert(head);
        while(head != NULL && head->next != NULL)
        {
        if(address.find(head->next) != address.end())
        {
            return true;
        }
        else
        {
            address.insert(head->next);
            head = head->next;
        }
        }
        
        return false;
    }
};