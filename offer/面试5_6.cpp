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
    int convertInteger(int A, int B) {
        unsigned int x = A ^ B;
        int cnt = 0;
        while (x) {
            x &= (x - 1);
            cnt += 1;
        }
        return cnt;
    }
};