#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int tail = x % 10;

            int64_t large = int64_t(ans) * 10 + int64_t(tail);
            if (large > int64_t(INT32_MAX) || large < int64_t(INT32_MIN)) {
                return 0;
            }
            
            ans = ans * 10 + tail;
            x /= 10;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.reverse(1534236469) << endl;
    return 0;
}
