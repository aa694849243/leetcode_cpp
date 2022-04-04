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
    int add(int a, int b) {
        int sum = a, carry = b;
        while (b) {
            sum = a ^ b;
            carry = static_cast<unsigned int>(a & b) << 1;
            a = sum;
            b = carry;
        }
        return sum;
    }
};