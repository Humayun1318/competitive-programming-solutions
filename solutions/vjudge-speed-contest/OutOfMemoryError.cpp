
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> a(n), added(n, 0);
        vector<int> lastUpdate(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int lastCrash = 0;

        for (int i = 1; i <= m; i++) {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (lastUpdate[b] < lastCrash) {
                added[b] = 0;
            }

            added[b] += c;
            lastUpdate[b] = i;

            if (a[b] + added[b] > h) {
                lastCrash = i;
                added[b] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            if (lastUpdate[i] < lastCrash) {
                cout << a[i];
            } else {
                cout << a[i] + added[i];
            }

            cout << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
