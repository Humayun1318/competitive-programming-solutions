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
        vector<int> cap;
        vector<int> sm;
        string s;
        cin >> s;

        vector<bool> deleted(s.size(), false);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' && !cap.empty())
            {
                deleted[cap.back()] = true;
                cap.pop_back();
            }
            else if (s[i] == 'b' && !sm.empty())
            {
                deleted[sm.back()] = true;
                sm.pop_back();
            }
            else if (s[i] != 'b' && islower(s[i]))
            {

                sm.push_back(i);
            }
            else if (s[i] != 'B' && isupper(s[i]))
            {
                cap.push_back(i);
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (!deleted[i] && s[i] != 'B' && s[i] != 'b')
                cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}