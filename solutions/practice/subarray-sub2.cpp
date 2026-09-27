#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;

    cin >> n >> x;

    map<long long, long long> mp;

    mp[0] = 1;

    long long prefixSum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        prefixSum += a;

        long long need = prefixSum - x;

        if (mp.count(need))
        {
            ans += mp[need];
        }

        mp[prefixSum]++;
    }

    cout << ans << '\n';

    return 0;
}