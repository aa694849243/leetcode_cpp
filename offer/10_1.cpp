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
    void merge(vector<int> &A, int m, vector<int> &B, int n) {
        int pa = m - 1, pb = n - 1, tail = m + n - 1;
        while (pa >= 0 || pb >= 0) {
            if (pa == -1) {
                A[tail] = B[pb];
                --pb;
            } else if (pb == -1) {
                A[tail] = A[pa];
                --pa;
            } else if (A[pa] > B[pb]) {
                A[tail] = A[pa];
                --pa;
            } else {
                A[tail] = B[pb];
                --pb;
            }
            --tail;
        }

    }
};