#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> digits = {9, 9, 9};
    digits = plusOne(digits);

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }

    return 0;
}