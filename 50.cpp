#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    double powpow(int x, long long n) {
        if (n == 0)
            return 1.0;
        double y = powpow(x, n / 2);
        return n % 2 == 0 ? y * y : y * y * x;
    }
    double ss(int x, int n) {
        long long N = n;
        if (N >= 0) {
            return powpow(x, N);
        } else {
            return 1.0 / powpow(x, -N);
        }
    }
};

int main() {
    int a[] = {5, 1, 2, 3, 4};
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    int x = 1.00, n = -2147483648;
    Solution solution;
    cout << solution.ss(x, n) << endl;
}