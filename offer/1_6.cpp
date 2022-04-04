#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    string compressString(string S) {
        if (S.size() == 0) return S;
        int cnt = 1;
        char pre = S[0];
        string ans = "";
        for (int i = 1; i < S.size(); ++i) {
            if (S[i] == pre) cnt += 1;
            else {
                ans += pre + to_string(cnt);
                pre = S[i];
                cnt = 1;
            }
        }
        ans += pre + to_string(cnt);
        return ans.size() < S.size() ? ans : S;

    }
};