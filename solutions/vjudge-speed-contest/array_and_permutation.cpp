
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

        vector<int> p(n), a(n), pos(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = true;
        int lastPos = -1;

        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1]) {
                continue;
            }

            if (pos[a[i]] <= lastPos) {
                ok = false;
                break;
            }

            lastPos = pos[a[i]];
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
