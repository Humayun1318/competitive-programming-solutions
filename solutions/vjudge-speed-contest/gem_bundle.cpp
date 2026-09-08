#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--){
        int r, g, b;
        cin >> r >> g >> b;

        int mn = min(r, min(g, b));

        cout << (mn*10)+((r-mn)*3)+((g-mn)*3)+((b-mn)*3) << "\n";
    }

    return 0;
}