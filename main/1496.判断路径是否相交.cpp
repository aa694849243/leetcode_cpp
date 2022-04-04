#include <unordered_set>
#include <set>
#include <iostream>

using namespace std;

// @solution-sync:begin
class Solution {
public:
    bool isPathCrossing(string path) {
//        哈希表
        unordered_set<string> visited;
        visited.insert("0,0");
        int x = 0, y = 0;

        for (char c : path) {
            if (c == 'N') y++;
            if (c == 'S') y--;
            if (c == 'E') x++;
            if (c == 'W') x--;
            string s = to_string(x) + "," + to_string(y);
            if (visited.count(s)) return true;
            visited.insert(s);
        }
        return false;
    }
};