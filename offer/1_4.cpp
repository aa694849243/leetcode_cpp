#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;
class Solution {
public:
    bool canPermutePalindrome(string s) {
        set<int> st;
        for (auto x:s) {
            if (st.count(x)) {
                st.erase(x);
            } else {
                st.emplace(x);
            }
        }
        return st.size() <= 1;
    }
};