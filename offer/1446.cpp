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
    int maxPower(string s) {
        char p = ' ';
        int ma = 0, cnt = 0;
        for (char ch:s) {
            if (ch == p) {
                ++cnt;
                ma = max(cnt, ma);
            } else {
                p = ch;
                cnt = 1;
                ma = max(cnt, ma);
            }
        }
        return ma;
    }

};