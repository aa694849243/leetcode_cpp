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
    int missingNumber(vector<int>& nums) {
        int a = 0;
        for (int num = 1; num <= nums.size(); ++num) {
            a ^= num;
        }
        for (int num:nums) {
            a ^= num;
        }
        return a;
    }
};