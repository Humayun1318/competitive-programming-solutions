#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v;
    unordered_set<string> seen;

    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {

        if (seen.count(v[i]) == 0)
        {
            cout << v[i] << "\n";
            seen.insert(v[i]);
        }
    }

    return 0;
}