#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int lo = 0, hi = numbers.size() - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (numbers[mid]>numbers[hi]) lo = mid + 1;
            else if (numbers[mid]<numbers[hi]) hi=mid;
            else hi-=1;
        }
        return  numbers[lo];
    }
};