#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>
#include <bitset>

using namespace std;

class Solution {
public:
    int reverseBits(int num) {
        bitset<32> b(num);
        int ans = 0, flag = 1, l = 0, r = 0;
        for (int i = 0; i < 32; ++i) {
            if (b[i] == 0) flag -= 1;
            while (flag < 0) {
                if (b[l] == 0) flag += 1;
                l += 1;
            }
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};