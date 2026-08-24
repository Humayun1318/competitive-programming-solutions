#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    if(n < 10)
        cout << 0<< 0<< 0 << n;
    else if (n < 100)
        cout << 0<<0 << n;
    else if(n < 1000)
        cout << 0 << n;
    else
        cout << n;

    return 0;
}