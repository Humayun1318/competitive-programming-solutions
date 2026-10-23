
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int bestL = -1;
        int bestLen = 0;
        int i = 0;

        while (i < n) {
            if (freq[a[i]] != 1) {
                i++;
                continue;
            }

            int j = i;

            while (j < n && freq[a[j]] == 1) {
                j++;
            }

            int len = j - i;

            if (len > bestLen) {
                bestLen = len;
                bestL = i;
            }

            i = j;
        }

        if (bestL == -1) {
            cout << 0 << '\n';
        } else {
            cout << bestL + 1 << " "
                 << bestL + bestLen << '\n';
        }
    }

    return 0;
}
