#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >>  b;

    int mn = min(r, b);

    cout << (((mn)*5) + ((r-mn)*1) + ((b-mn)*2));


    return 0;
}