#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <sstream>

using namespace std;

/*
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> record;
        for (string str : strs) {
            record[ transform(str) ].push_back(str);
        }

        vector<vector<string>> ans;
        for (const auto & p : record) {
            ans.push_back(p.second);
        }
        return ans;
    }
private:
    string transform(const string& str) {
        int counter[26] = {};
        for (char c : str) {
            counter[c - 'a'] ++ ;
        }
        stringstream ss;
        for (int i = 0; i < 26; ++i) {
            ss << string(counter[i], i + 'a');
        }
        return ss.str();
    }
};
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> record;
        for (string str : strs) {
            string ordered = str;
            sort(ordered.begin(), ordered.end());
            record[ordered].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto p : record) {
            ans.push_back(p.second);
        }
        return ans;
    }
};

#include <iostream>
#include <sstream>

string show(const string& str) {
    int counter[26] = {};
    for (char c : str) counter[c - 'a'] ++ ;
    stringstream ss;
    for (int i : counter) ss << to_string( i );
    return ss.str();
}

int main()
{
    // string strs[] = { "bdddddddddd", "bbbbbbbbbbc" };
    // for (string str : strs) {
    //     cout << show(str) << endl;
    // }

    string a("2"), b("2");
    cout << (a == b) << endl;

    string strs[] = { "eat", "tea", "tan", "ate", "nat", "bat" };
    vector<string> vec;
    for (string str : strs) {
        char ca[26] = {};
        for (char c : str) {
            ca[c - 'a'] ++ ;
        }
        vec.push_back(string(ca));
    }
    cout << (vec[1] == vec[2]) << endl;

    return 0;
}
