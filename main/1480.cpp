//
// Created by caoji on 2022-04-04.
//
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] += sum;
            sum = nums[i];
        }
        return nums;
    }
};
