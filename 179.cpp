#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);
    return sa + sb > sb + sa;
}
int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    int numsSize;
    string ans;
    numsSize = nums.size();
    sort(nums.begin(), nums.end(), compare);
    for (int i = 0; i < numsSize; i++) {
        ans += to_string(nums[i]);
    }
    cout << ans;
    return 0;
}