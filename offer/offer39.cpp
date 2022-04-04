#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <priority_queue>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, cand = -1;
        for (int num:nums) {
            if (num == cand) {
                cnt++;
            } else if (--cnt < 0) {
                cnt = 1;
                cand = num;
            }
        }
        return cand;
    }
};