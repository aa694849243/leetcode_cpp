#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    string replaceSpaces(string S, int length) {
        string res;
        for (int i = 0; i < length; ++i) {
            if (S[i] == ' ') {
                res += "%20";
            } else res += S[i];
        }
        return res;

    }
};