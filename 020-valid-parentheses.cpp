#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            switch (c) {
                case '(': stack.push(')'); break;
                case '[': stack.push(']'); break;
                case '{': stack.push('}'); break;
                default:
                    if (stack.empty() || stack.top() != c) return false;
                    stack.pop();
            }
        }
        return stack.empty();
    }
};

#include <iostream>

using namespace std;

int main()
{
    cout << Solution().isValid("([{}])") << endl;
    return 0;
}
