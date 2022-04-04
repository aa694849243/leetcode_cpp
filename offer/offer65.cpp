#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    int add(int a, int b) {
        while (b) {
            int tmp = a ^ b;
            int carry = (unsigned int)(a & b) << 1;
            a = tmp;
            b = carry;
        }
        return a;

    }
};