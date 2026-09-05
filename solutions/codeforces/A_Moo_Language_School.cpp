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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int windowSum = 0;
        for (int i = 0; i < n; i+=k)
        {
            bool f = false;
            for(int j=i; j<i+k; j++){
                if(s[j] == '0')
                    f = true;   
            }
            if(!f){
                windowSum += 1;
            }
        }

        cout << windowSum << "\n";
    }

    return 0;
}