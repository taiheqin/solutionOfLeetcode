#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3};
    int i = nums.size() + 2;
    while (i >= 0 && nums[i] > nums[i + 1])
        i--;
    if (i >= 0) {
        int j = nums.size() - 1;
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
    cout << nums[0] << nums[1] << nums[2];
    return 0;
}
