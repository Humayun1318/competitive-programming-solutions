#include <bits/stdc++.h>
using namespace std;

char findMissingLetter(string s) {
    bool found[26] = {};

    for(char c : s) {
        found[c - 'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(!found[i]) {
            return char('a' + i);
        }
    }

    return 'None';
}

int main() {

    string s1 = "abcdefghijklmnopqrstuvwxyz";
    string s2; cin >> s2;

    for(int i=0; i<s1.size(); i++){
        if(s2.find(s1[i]) == string::npos){
            cout << s1[i];
            return 0;
        }
    }
    cout << "None";

    return 0;
}