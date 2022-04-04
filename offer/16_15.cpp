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
    vector<int> masterMind(string solution, string guess) {
        vector<int> v2(2, 0);
        vector<int> vs(4, 0);
        vector<int> vg(4, 0);
        vs[0] = count(solution.begin(), solution.end(), 'R');
        vs[1] = count(solution.begin(), solution.end(), 'G');
        vs[2] = count(solution.begin(), solution.end(), 'B');
        vs[3] = count(solution.begin(), solution.end(), 'Y');
        vg[0] = count(guess.begin(), guess.end(), 'R');
        vg[1] = count(guess.begin(), guess.end(), 'G');
        vg[2] = count(guess.begin(), guess.end(), 'B');
        vg[3] = count(guess.begin(), guess.end(), 'Y');
        for (int i = 0; i < 4; ++i) {
            v2[1] += min(vs[i], vg[i]);
        }
        for (int i = 0; i < solution.size(); ++i) {
            if (solution[i] == guess[i]) v2[0]++;
        }
        v2[1] -= v2[0];
        return v2;
    }
};