#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int minCost = 100000;

        for (int i = 0; i < n - 1; i++)
        {
            int sum = v[i] + v[i + 1];
            minCost = min(minCost, sum);
        }

        cout << minCost << "\n";
    }
    return 0;
}