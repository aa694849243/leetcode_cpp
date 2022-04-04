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
    int waysToStep(int n) {
        if (n < 4) return n < 3 ? n : 4;
        long long a = 1, b = 2, c = 4, temp;
        for (int i = 4; i < n + 1; ++i) {
            temp = (a + b + c) % 1000000007;
            a = b;
            b = c;
            c = temp;
        }
        return temp
    }
};