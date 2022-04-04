#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include<stack>

using namespace std;

class TripleInOne {
private:
    int limit;
    vector<stack<int>> s;
public:
    TripleInOne(int stackSize) {
        s.resize(3);
        this->limit = stackSize;
    }

    void push(int stackNum, int value) {
        if (s[stackNum].size() < limit) {
            s[stackNum].push(value);
        }
    }

    int pop(int stackNum) {
        if (!s[stackNum].empty()) {
            int a = s[stackNum].top();
            s[stackNum].pop();
            return a;
        }
        return -1;
    }

    int peek(int stackNum) {
        if (!s[stackNum].empty()) {
            return s[stackNum].top();
        }
        return -1;
    }

    bool isEmpty(int stackNum) {
        return s[stackNum].empty();
    }
};

/**
 * Your TripleInOne object will be instantiated and called as such:
 * TripleInOne* obj = new TripleInOne(stackSize);
 * obj->push(stackNum,value);
 * int param_2 = obj->pop(stackNum);
 * int param_3 = obj->peek(stackNum);
 * bool param_4 = obj->isEmpty(stackNum);
 */