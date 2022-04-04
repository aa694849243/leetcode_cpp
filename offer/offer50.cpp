#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> m;
        queue<pair<char, int>> q;
        for (int i = 0; i < s.size(); ++i) {
            if (!m.count(s[i])) {
                m[s[i]] = i;
                q.emplace(s[i], i);
            } else {
                m[s[i]] = -1;
                while (!q.empty() && m[q.front().first] == -1) {
                    q.pop();
                }
            }
        }
        return q.empty() ? ' ' : q.front().first;
    }
};

int main() {
    char ans;
    Solution s;
    string c;
    c = "abaccdeff";
    ans = s.firstUniqChar(c);
    cout << ans;
}