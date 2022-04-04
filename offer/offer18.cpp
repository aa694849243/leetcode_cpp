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
    ListNode *deleteNode(ListNode *head, int val) {
        ListNode *H = new ListNode(-1);
        H->next = head;
        ListNode *pre = H;
        while (head) {
            if (head->val == val) {
                pre->next = head->next;
                break;
            }
            pre = head;
            head = head->next;
        }
        return H->next;
    }
};