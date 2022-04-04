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
    int binsect(vector<string> &words, int l, int r, string s) {
        if (l > r) return -1;
        int mid = l + (r - l) / 2;
        if (words[mid] != "" && words[mid] < s) {
            return binsect(words, mid + 1, r, s);
        }
        if (words[mid] != "" && words[mid] > s) {
            return binsect(words, l, mid - 1, s);
        }
        if (words[mid] == s) return mid;
        int l_ans = binsect(words, l, mid - 1, s);
        int r_ans = binsect(words, mid + 1, r, s);
        return l_ans == -1 ? r_ans : l_ans;
    }

    int findString(vector<string> &words, string s) {
        return binsect(words, 0, (int) words.size() - 1, s);
    }
};