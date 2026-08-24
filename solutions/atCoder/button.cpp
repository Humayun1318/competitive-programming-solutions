#include <bits/stdc++.h>
using namespace std;


//there possibilities to have 3 scenarios 
// first, a 2 times press that time (a+a-1 = 2a-1)
// second, a 1 times b 1 times press that time (a+b)
// Third, b 2 times press that time (b+b-1 = 2b-1)
int main() {

    int a, b; cin >> a >> b;

    int ans = max({(2*a-1),(a+b), (2*b-1)});

    cout << ans; 

    return 0;
}