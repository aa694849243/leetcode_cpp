#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <priority_queue>
//大根堆
using namespace std;
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> vec(k, 0);
        if (k == 0) {
            return vec;
        }
        priority_queue<int> Q;
        for (int i = 0; i < k; ++i) {
            Q.push(arr[i]);
        }
        for (int i = k; i < arr.size(); ++i) {
            if (arr[i] < Q.top()) {
                Q.pop();
                Q.push(arr[i]);
            }
        }
        for (int i = 0; i < k; ++i) {
            vec[i] = Q.top();
            Q.pop();
        }
        return  vec;
    }
};