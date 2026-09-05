#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    vector<pair<string, string>> v;

    while (q--)
    {
        string oldNickname, newNickname;
        cin >> oldNickname >> newNickname;

        bool found = false;

        for (auto &p : v)
        {
            if (p.second == oldNickname)
            {
                p.second = newNickname;
                found = true;
                break;
            }
        }

        if (!found)
        {
            v.push_back({oldNickname, newNickname});
        }
    }

    cout << v.size() << "\n";
    for (auto p : v)
        cout << p.first << " " << p.second << "\n";

    return 0;
}