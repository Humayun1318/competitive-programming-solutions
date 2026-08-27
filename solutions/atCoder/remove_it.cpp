#include <bits/stdc++.h>
using namespace std;



int main() {

    // int n, x; cin >> n  >> x; 
    // vector<int> ar;
    // while(n--){
    //     int v; cin >> v;
    //     if(v != x){
    //         ar.push_back(v);
    //     }
            
    // }
    // if(ar.empty()){
    //     cout << "";
    //     return 0;
    // }
    // for(auto v: ar)
    //     cout << v << " " ;
    int n, x;
    cin >> n >> x;

    bool first = true;

    while(n--) {
        int v;
        cin >> v;

        if(v != x) {
            if(!first) cout << " ";
            cout << v;
            first = false;
        }
    }



    cout << '\n';
    return 0;
}