#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<pair<string, string>> leaves;

    for (int i = 0; i < n; i++)
    {
        string species, color;
        cin >> species >> color;

        leaves.insert({species, color});
    }

    cout << leaves.size();

    return 0;
}