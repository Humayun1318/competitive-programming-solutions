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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            bool flag = true;
            if (n != s.size())
            {
                cout << "NO\n";
                continue;
            }
            map<char, long long> charToNum;
            map<long long, char> numToChar;
            for (int i = 0; i < n; i++)
            {

                // character -> number
                auto it1 = charToNum.find(s[i]);

                if (it1 != charToNum.end())
                {
                    if (it1->second != v[i])
                    {
                        flag = false;
                        break;
                    }
                }

                // number -> character
                auto it2 = numToChar.find(v[i]);

                if (it2 != numToChar.end())
                {
                    if (it2->second != s[i])
                    {
                        flag = false;
                        break;
                    }
                }

                charToNum[s[i]] = v[i];
                numToChar[v[i]] = s[i];
            }
            if (flag)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }

    return 0;
}