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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        set<long long> suffix;
        int answer = 0;
        for (int i = n - 1; i >= 0; i--)
        {

            if (suffix.count(v[i]))
            {
                answer = i + 1;
                break;
            }

            suffix.insert(v[i]);
        }

        cout << answer << "\n";
    }

    return 0;
}