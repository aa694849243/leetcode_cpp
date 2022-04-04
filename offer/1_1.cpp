#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        vector<int> hash(256, 0);
        for (int a:astr) {
            if (hash[a] > 0) {
                return false;
            }
            ++hash[a];
        }
        return true;

    }
};

class Solution {
public:
    bool isUnique(string astr) {
        unsigned long long a = 0, b = 0, c = 0, d = 0, *p;
        for (auto x:astr) {
            int q = x / 64, r = x % 64;
            if(q==0) p = &a;
            else if(q==1) p = &b;
            else if(q==2) p = &c;
            else p = &d;
            unsigned long long t = 1;
            t <<= r;
            if (*p & t) {
                return false;
            }
            *p |= t;
        }
        return true;
    }
};