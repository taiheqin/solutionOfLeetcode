#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int ss(vector<int>& nums) {
        int length = nums.size(), ans = nums[0], sum = nums[0];
        if (nums.size() == 0) {
            return 0;
        }
        for (vector<int>::iterator iter = nums.begin() + 1; iter != nums.end();
             iter++) {
            if (*iter > *(iter - 1)) {
                sum += *iter;
            } else {
                sum = *iter;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};

int main() {
    int a[] = {5, 1, 2, 3, 4};
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.ss(nums) << endl;
}