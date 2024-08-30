//https://leetcode.com/problems/middle-of-the-linked-list/
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
/*
class Solution {
public:
    int size(ListNode* head){
        int count=0;
        ListNode* tmp = head;
        while(tmp != NULL){
            tmp=tmp->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode* tmp = head;
        for(int i=0; i<sz/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};

*/