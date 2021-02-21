struct ListNode {
    int val;
    ListNode * next;
    ListNode(int _val) : val(_val), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr, *cur = head;
        while (cur != nullptr) {
            ListNode * next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ListNode *a = new ListNode(0), *b = new ListNode(2);
    // swap(a->val, b->val);
    swap(a, b);
    cout << a->val << " " << b->val << endl;
    return 0;
}
