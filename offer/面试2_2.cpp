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
    int kthToLast(ListNode* head, int k) {
        ListNode *H = head;
        while (k>0) {
            k -= 1;
            head = head->next;
        }
        ListNode *ans = H;
        while (head) {
            head = head->next;
            ans = ans->next;
        }
        return ans->val;

    }
};