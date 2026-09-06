#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> name;
    while (n--)
    {

        string s;
        cin >> s;

        auto it = find(name.begin(), name.end(), s);

        if (it != name.end())
        {
            int x = 1;
            while (find(name.begin(), name.end(), *it + to_string(x)) != name.end())
            {
                x++;
            }
            name.push_back(s + to_string(x));
            cout << s + to_string(x) << "\n";
        }
        else
        {
            name.push_back(s);
            cout << "OK" << "\n";
        }
    }

    return 0;
}