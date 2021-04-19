#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int max1 = 0, cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cnt++;
            max1 = max1 > cnt ? max1:cnt ;
        }else{
            cnt = 0;
        }
    }
    cout << max1;
    return 0;
}
