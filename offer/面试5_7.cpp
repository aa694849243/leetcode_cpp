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
    int exchangeBits(int num) {
        return (((num << 1) & 0xaaaaaaaa) | ((num >> 1) & 0x55555555));
    }
};