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
    const string push = "Push", pop = "Pop";
    vector<string> buildArray(vector<int> &target, int n) {
        vector<string> ans;
        int l = 0, lim = target.size();
        for (int i = 1; i < n + 1; ++i) {
            if (l >= lim) {
                break;
            }
            ans.emplace_back(push);
            if (i<target[l]) { ans.emplace_back(pop); }
            else {
                ++l;
            }
        }
        return ans;
    }
};