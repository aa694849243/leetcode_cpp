#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> res;
        int sum = 0;
        int l = 1, r = 1;
        while (l < target / 2) {
            sum += r;
            while (l <= r && sum > target) {
                sum -= l;
                ++l;
            }
            if (sum == target) {
                vector<int> arr;
                for (int i = l; i <= r; ++i) {
                    arr.emplace_back(i);
                }
                res.emplace_back(arr);
            }
            ++r;
        }
        return res;
    }
};