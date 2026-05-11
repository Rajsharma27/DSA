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
    ListNode* swapPairs(ListNode* head) {

        vector<int> arr;
        ListNode* temp = head;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 0; i + 1 < arr.size(); i += 2){
            swap(arr[i], arr[i+1]);
        }

        if(arr.size() == 0) return NULL;

        ListNode* p = new ListNode(arr[0]);
        ListNode* q = p;

        for(int i = 1; i < arr.size(); i++){
            q->next = new ListNode(arr[i]);
            q = q->next;
        }
        return p;
    }
};