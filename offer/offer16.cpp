#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
//快速幂
class Solution {
public:
    double myPow(double x, long n) {
        if(n==0) return 1;
        if(n<0) x=1/x,n=-n;
        double res=1;
        while (n > 0) {
            if(n&1) res*=x;
            n>>=1;
            x*=x;
        }
        return res;
    }
};