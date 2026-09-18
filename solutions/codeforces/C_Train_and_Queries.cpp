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

        string dummy;
        getline(cin, dummy);

        int n, k;
        cin >> n >> k;

        map<int, int> first_idx;
        map<int, int> last_idx;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // Jodi x prothom bar ashe, tahole first_idx save korbo
            if (first_idx.find(x) == first_idx.end())
            {
                first_idx[x] = i;
            }
            // Last index update hote thakbe
            last_idx[x] = i;
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            // Check: a & b exist kore kina AND first_idx[a] < last_idx[b]
            if (first_idx.count(a) && first_idx.count(b) && first_idx[a] < last_idx[b])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}