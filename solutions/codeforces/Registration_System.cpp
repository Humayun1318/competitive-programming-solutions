#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            mp[s] = 1;
            cout << "OK\n";
        }
        else
        {
            int x = mp[s];

            while (mp.find(s + to_string(x)) != mp.end())
            {
                x++;
            }

            string newName = s + to_string(x);

            mp[s] = x + 1;
            mp[newName] = 1;

            cout << newName << '\n';
        }
    }
}