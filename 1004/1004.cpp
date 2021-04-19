#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> A = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    int K = 3;
    int left = 0, right = 0, zerocnt = 0, ans = 0;
    while (right < A.size()) {
        zerocnt += A[right] ^ 1;

        while (zerocnt > K) {
            zerocnt -= A[left] ^ 1;
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    cout << ans;
    return 0;
}