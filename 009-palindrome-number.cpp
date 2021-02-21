#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string str = to_string(x);
        int a = 0, b = str.size() - 1;
        while (a < b) {
            if (str[a++] != str[b--]) {
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) return false;

//         int rev = 0, cur = x;

//         while (cur != 0) {
//             int tail = cur % 10;

//             int64_t large = int64_t(rev) * 10 + int64_t(tail);
//             if (large > int64_t(INT32_MAX) || large < int64_t(INT32_MIN)) {
//                 return false;
//             }

//             rev = rev * 10 + tail;
//             cur /= 10;
//         }

//         return rev == x;
//     }
// };

int main()
{
    Solution sol;
    cout << sol.isPalindrome(12344321) << endl;
    cout << to_string(+121) << endl;
    cout << to_string(-121) << endl;
    return 0;
}
