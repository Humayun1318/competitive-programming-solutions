#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> w(n);

        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }

        int answer = 0;

        // Try every possible sum
        for (int sum = 2; sum <= 2 * n; sum++) {

            vector<bool> used(n, false);

            int teams = 0;

            for (int i = 0; i < n; i++) {

                if (used[i])
                    continue;

                for (int j = i + 1; j < n; j++) {

                    if (used[j])
                        continue;

                    if (w[i] + w[j] == sum) {
                        teams++;

                        used[i] = true;
                        used[j] = true;

                        break;
                    }
                }
            }

            answer = max(answer, teams);
        }

        cout << answer << '\n';
    }

    return 0;
}