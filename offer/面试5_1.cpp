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
    int insertBits(int N, int M, int i, int j) {
        for (int k = i; k <= j; ++k) {
            if (N & (1 << k)) N ^= (1 << k);
        }
        M <<= i;
        return N | M;
    }
};