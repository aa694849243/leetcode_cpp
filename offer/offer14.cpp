#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    long mylow(int base, int length, long mod) {
        long ret = 1;
        for (int i = 0; i < length; ++i) {
            ret = ret * base % mod;
        }
        return ret
    }

    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        int length = n / 3;
        int rem = n % 3;
        long base = 3, mod = 1e9 + 7;
        if(rem==0) return int(mylow(base, length, mod));
        else if (rem==1) return  int(mylow(base,length-1,mod)*4%mod);
        else return int(mylow(base,length,mod)*2%mod);
    }
};