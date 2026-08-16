#include <bits/stdc++.h>
using namespace std;

bool stoneGameIX(vector<int> &stones)
{

    int remainder0 = 0;
    int remainder1 = 0;
    int remainder2 = 0;

    for (int stone : stones)
    {

        if (stone % 3 == 0)
        {
            remainder0++;
        }
        else if (stone % 3 == 1)
        {
            remainder1++;
        }
        else
        {
            remainder2++;
        }
    }

    if (remainder0 % 2 == 0)
    {

        if (remainder1 == 0)
        {
            return false;
        }

        if (remainder2 == 0)
        {
            return false;
        }

        return true;
    }

    int difference = remainder1 - remainder2;

    if (difference < 0)
    {
        difference = -difference;
    }

    if (difference > 2)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> stones = {2, 1};
    stoneGameIX(stones);
    return 0;
}