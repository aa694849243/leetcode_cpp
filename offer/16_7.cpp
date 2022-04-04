#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <pair>

using namespace std;
//长整型位移
//https://leetcode-cn.com/problems/maximum-lcci/solution/wei-yi-qiang-zhi-zhuan-wei-longjie-jue-yi-chu-wen-/
class Solution {
public:
    int maximum(int a, int b) {
        long long dif = (long) a - (long) b;
        int k = (int) (dif >> 63);
        return (1 + k) * a - b * k;

    }
};