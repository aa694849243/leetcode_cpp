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
    int trailingZeroes(int n) {
        long factor = 5;
        int cnt = 0;
        while (n >= factor) {
            cnt += (int) n / factor;
            factor *= 5;
        }
        return cnt;
    }
};