#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <sstream>

using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string s;
        for (int i = 1; ss >> s; ++i) {
            if (s.find(searchWord) == 0) return i;
        }
        return -1;
    }
};

