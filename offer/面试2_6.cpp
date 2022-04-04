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
    ListNode *reverseList(ListNode *head) {
        ListNode *pre = nullptr;
        ListNode *cur = head;
        while (cur) {
            ListNode *nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }

    ListNode *halfofList(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode *head) {
        if (!head) return true;
        ListNode *first = halfofList(head);
        ListNode *second = reverseList(first->next);
        ListNode *h1 = head, *h2 = second;
        bool res = true;
        while (h1&&h2) {
            if (h1->val != h2->val) {
                res = false;
                break;
            }
            h1 = h1->next;
            h2 = h2->next;
        }
        first->next = reverseList(second);
        return res;
    }
};