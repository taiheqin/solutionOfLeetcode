#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int ss(vector<int>& nums) {
        int i = 0;
        if (nums.size() == 0) {
            return 0;
        }
        for (vector<int>::iterator iter = nums.begin() + 1;
             iter != nums.end();) {
            if (*iter != nums[i]) {
                nums[i + 1] = *iter;
                i++;
                iter++;
            } else {
                nums.erase(iter);
            }
        }
        return i + 1;
    }
};

int main() {
    int a[] = {5, 1, 1, 3, 3};
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.ss(nums) << endl;
}