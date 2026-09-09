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
        string s;
        cin >> s;

        int pos = -1;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                pos = i + 1;
                break;
            }
        }

        if (pos != -1)
        {
            char c = (s[pos] == 'a') ? 'b' : 'a';
            s.insert(pos, 1, c);
        }
        else
        {
            char c = (s[0] == 'a') ? 'b' : 'a';
            s.insert(0, 1, c);
        }

        cout << s << '\n';
    }

    return 0;
}