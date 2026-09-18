#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= ans)
        {
            ans++;
        }
    }

    cout << ans - 1 << '\n';

    return 0;
}