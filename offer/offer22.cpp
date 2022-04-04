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
//快慢指针
class Solution {
public:
    ListNode *getKthFromEnd(ListNode *head, int k) {
        if (head == nullptr || k <= 0) return nullptr;
        ListNode *fast = head, *slow = head;
        for (int i=0;
        i < k;
        ++i){
            if (fast == nullptr) return nullptr;
            fast = fast->next;
        }
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};