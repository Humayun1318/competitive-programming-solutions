#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;

    cin >> n >> k;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    long long sum = 0;
    long long ans = 0;

    for (int r = 0; r < n; r++)
    {
        sum += v[r];

        while (sum >= k)
        {
            // Current [l ... r] is good.
            // And because all elements are positive,
            // [l ... r], [l+1 ... r], ... may also be good.
            sum -= v[l];
            l++;
        }

        // There are l valid starting positions:
        // 0, 1, ..., l-1
        ans += l;
    }

    cout << ans << '\n';

    return 0;
}