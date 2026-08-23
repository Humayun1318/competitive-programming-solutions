#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c; cin >> a >> b >> c;
    if(2*c > a || (a < 2*c && 2*c <= b)){
        cout << 2*c << "\n";
    }else{
        cout << "-1" << "\n";
    }

    return 0;
}