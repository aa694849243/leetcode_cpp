#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    bool isStraight(vector<int>& nums) {
        vector<bool> record(15, false);
        int mi = 14, ma = 0;
        for (int num:nums) {
            if(num==0) continue;
            if(record[num]) return false;
            record[num] = true;
            ma = max(ma, num);
            mi = min(mi, num);
        }
        return ma - mi + 1 <= 5;

    }
};
int main()
{
    int ans;
    Solution s;
    vector<int> prices{1,2,3,4,5};
    ans = s.isStraight(prices);
    cout << ans;
}