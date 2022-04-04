#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s, m;
    MinStack() {

    }

    void push(int x) {
        s.push(x);
        if (m.empty()) {
            m.push(x);
        } else {
            m.push(min(m.top(), x));
        }
    }

    void pop() {
        if (s.empty()) {
            return;
        }
        s.pop();
        m.pop();

    }

    int top() {
        if (s.empty()) {
            return -1;
        }
        return s.top();

    }

    int getMin() {
        if (s.empty()) {
            return -1;
        }
        return m.top();

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */