//https://leetcode.com/problems/middle-of-the-linked-list/description/

/*
class Solution {
public:
    int size_of_list(ListNode *head){
        int count=0;
        ListNode *tmp = head;
        while (tmp != NULL){
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp = head;
        int sz = size_of_list(head);
        for(int i=0; i<sz/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};
*/

// Another way:
/*
class Solution {
public:
    
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
*/
