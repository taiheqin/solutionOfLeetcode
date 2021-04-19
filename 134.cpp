#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int ss(vector<int>& gas, vector<int>& cost) {
        int length = gas.size();
        int i = 0, j = 0, cnt = 1;
        int last = 0;
        while (i < length) {
            last = gas[i] - cost[i];
            j = i + 1;
            cnt = 1;
            while (j != i && last >= 0 && cnt < length - 1) {
                last = last + gas[j] - cost[j];
                j = (j + 1) % length;
                cnt++;
            }
            if (i == j) {
                return i;
            } else {
                i = j;
            }
        }
        return -1;
    }
};

int main() {
    int a[] = {5,1,2, 3, 4};
    int b[] = { 4, 4,1,5,1};
    vector<int> gas(a, a + sizeof(a) / sizeof(int));
    vector<int> cost(b, b + sizeof(b) / sizeof(int));
    Solution solution;
    cout << solution.ss(gas, cost) << endl;
}