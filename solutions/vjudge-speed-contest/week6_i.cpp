
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool possible = true;

        while (i < p.size() && j < s.size()) {
            if (p[i] != s[j]) {
                possible = false;
                break;
            }

            char ch = p[i];

            int countP = 0;
            int countS = 0;

            while (i < p.size() && p[i] == ch) {
                countP++;
                i++;
            }

            while (j < s.size() && s[j] == ch) {
                countS++;
                j++;
            }

            if (countS < countP || countS > 2 * countP) {
                possible = false;
                break;
            }
        }

        if (i != p.size() || j != s.size()) {
            possible = false;
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
