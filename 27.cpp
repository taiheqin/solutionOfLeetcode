#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int ss(vector<int>& nums, int val) {
        int length = nums.size();
        if (nums.size() == 0) {
            return 0;
        }
        for (vector<int>::iterator iter = nums.begin(); iter != nums.end();) {
            if (*iter == val) {
                nums.erase(iter);
                length--;
            } else {
                iter++;
            }
        }
        return length;
    }
};

int main() {
    int a[] = {5, 1, 2, 3, 4};
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.ss(nums, 4) << endl;
}