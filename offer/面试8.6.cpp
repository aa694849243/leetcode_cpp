#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>

using namespace std;

class Solution {
public:
    void rec(int n, vector<int> &A, vector<int> &B, vector<int> &C) {
        if (n == 1) {
            C.emplace_back(A.back());
            A.pop_back();
        } else {
            rec(n - 1, A, C, B);
            C.emplace_back(A.back());
            A.pop_back();
            rec(n - 1, B, A, C);
        }
    }

    void hanota(vector<int> &A, vector<int> &B, vector<int> &C) {
        rec((int) A.size(), A, B, C);
    }
};