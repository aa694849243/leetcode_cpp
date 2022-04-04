#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int cnt = 0, len = s.size();
        for (char c:s) {
            if (c == ' ') cnt++;
        }
        s.resize(len + 2 * cnt);
        for (int i = len - 1, j = s.size() - 1; i < j; i--, j--) {
            if (s[i] != ' ') s[j] = s[i];
            else {
                s[j - 2] = '%';
                s[j - 1] = '2';
                s[j] = '0';
                j -= 2;
            }
        }
        return s;
    }
};