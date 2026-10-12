#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;

    for (auto ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            if (st.empty()) {
                return false;
            }

            if (ch == ')' && st.top() == '(') {
                st.pop();
            }
            else if (ch == '}' && st.top() == '{') {
                st.pop();
            }
            else if (ch == ']' && st.top() == '[') {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s;

    if (isValid(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}