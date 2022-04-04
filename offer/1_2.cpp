#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }
        unordered_map<char, int> m;
        for (int i = 0; i < s1.size();++i) {
            m[s1[i]] += 1;
            m[s2[i]] -= 1;
        }
        for (int i = 0; i < s1.size();++i) {
            if (m[s1[i]] || m[s2[i]]) {
                return false;
            }
        }
        return true;

    }
};