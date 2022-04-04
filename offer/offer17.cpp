#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;
        for(int i=0;i<get(n);++i)
            ans.emplace_back(i + 1);
        return  ans;
    }

    int get(int n){
        int ans = 0;
        while (n) {
            ans = ans * 10 + 9;
            --n;
        }
        return  ans;
    }
};