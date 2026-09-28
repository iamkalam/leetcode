#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int max_dep = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
                max_dep = max(max_dep, (int)st.size());
            } else if (c == ')') {
                st.pop();
            }
        }
        return max_dep;
    }
};


int main() {
    Solution solution;
    string s = "(1+(2*3)+((8)/4))+1";
    int result = solution.maxDepth(s);
    cout << "Maximum depth of nested parentheses: " << result << endl;
    return 0;
}