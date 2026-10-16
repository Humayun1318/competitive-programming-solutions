
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int runs = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                runs++;
            }
        }

        int best = 0;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] != s[i - 1] &&
                s[i] != s[i + 1]) {

                if (s[i - 1] == s[i + 1]) {
                    best = 2;
                    break;
                } else {
                    best = 1;
                }
            }
        }

        cout << runs - best << '\n';
    }

    return 0;
}
