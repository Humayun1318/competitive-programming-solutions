#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
        int l = 0; int r = s.size() - 1;
        
        while(l<=r){
            if(tolower(s[l]) == 'b' && tolower(s[r]) == 'b'){
                cout << r-l+1 << "\n";
                break;
            }
            else if(tolower(s[l]) != 'b' && tolower(s[r]) != 'b'){
                l++; 
                r--;
            }else if(tolower(s[l]) != 'b'){
                l++;
            }else{
                r--;
            }
        }
    }

    return 0;
}