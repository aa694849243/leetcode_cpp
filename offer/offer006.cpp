#include <vector>
#include <unordered_map>
#include <map>
#include <stack>
#include <iostream>

using namespace std;

// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode *head) {
        stack<int> stk;
        vector<int> res;
        while (head) {
            stk.push(head->val);
            head = head->next;
        }
        while (!stk.empty()) {
            res.push_back(stk.top());
            stk.pop();
        }
        return  res;
    }
};