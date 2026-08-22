#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<int> ar(n); 
        int countOne = 0;
        for(int i=0; i<n; i++){
            cin >> ar[i];
            if(ar[i] == 1) countOne++;
        }
        int ans = n - countOne/2;
        cout << ans << "\n";
    }

    return 0;
}