#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << 2 << '\n';

        int current = n;

        for (int x = n - 1; x >= 1; x--) {
            cout << current << ' ' << x << '\n';

            current = (current + x + 1) / 2;
        }
    }

    return 0;
}