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
        int n, m;
        cin >> n >> m;

        set<int> unique_marbles;
        for (int i = 0; i < n; i++)
        {
            int marble;
            cin >> marble;
            unique_marbles.insert(marble);
        }

        int not_collected = m - unique_marbles.size();

        cout << not_collected << "\n";
    }

    return 0;
}