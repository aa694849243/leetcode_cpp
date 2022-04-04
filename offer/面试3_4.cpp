#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> st1;
    stack<int> st2;

    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        st1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (st2.empty()) {
            while (!st1.empty()) {
                int a = st1.top();
                st1.pop();
                st2.push(a);
            }
        }
        int a = st2.top();
        st2.pop();
        return a;
    }

    /** Get the front element. */
    int peek() {
        if (st2.empty()) {
            while (!st1.empty()) {
                int a = st1.top();
                st1.pop();
                st2.push(a);
            }
        }
        int a = st2.top();
        return a;

    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return st1.empty() && st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */