struct ListNode {
    int val;
    ListNode * next;
    ListNode(int _val) : val(_val), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *prev = nullptr, *cur = head;
        int index = 1;
        while (cur != nullptr && index < m) {
            ListNode * next = cur->next;
            prev = cur;
            cur = next;
            index ++ ;
        }

        // 输入: 1->  2->3->4  ->5->NULL, m = 2, n = 4
        // 输出: 1->  4->3->2  ->5->NULL

        ListNode *a = prev, *b = cur;

        while (cur != nullptr && index <= n) {
            ListNode * next = cur->next;
            cur->next = 
            prev
            index ++ ;
        }

        b->next = cur;

        return prev;
    }
};

#include <iostream>

using namespace std;

int main()
{
    cout << "222" << endl;
    return 0;
}
