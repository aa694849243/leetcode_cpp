#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

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
    ListNode *removeDuplicateNodes(ListNode *head) {
        ListNode *b = head;
        while (b!= nullptr) {
            ListNode *c = b;
            while (c->next!= nullptr) {
                if(c->next->val==b->val) {
                    c->next = c->next->next;
                }
                else {
                    c = c->next;
                }
            }
            b = b->next;
        }
        return head;
    }
};