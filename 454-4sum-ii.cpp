#include <vector>
#include <cassert>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        assert(A.size() == B.size() && B.size() == C.size() && C.size() == D.size());

        int ans = 0, n = A.size();
        unordered_map<int, int> record;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                record[A[i] + B[j]] ++ ;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (record.find(0 - C[i] - D[j]) != record.end()) {
                    ans += record[0 - C[i] - D[j]];
                }
            }
        }

        return ans;
    }
};

int main()
{
    int a = 0, b = 2;
    assert(a == b); // Assertion 'a == b' failed.
    return 0;
}
