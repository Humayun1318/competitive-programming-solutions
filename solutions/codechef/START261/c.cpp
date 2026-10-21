#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        int ans = -1;

        for (int k = 0; k <= n; k++) {
            if ((s + k) % 5 == 0 && s <= 4 * k) {
                ans = k;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}