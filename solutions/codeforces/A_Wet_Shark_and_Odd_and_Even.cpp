#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n; cin >> n;
    long long mnOdd = INT_MAX;
    long long sum =0;
    for(int i=0; i<n; i++){
        long long v; cin >> v;
        sum += v;

        if(v %2 != 0){
           mnOdd = min(mnOdd, v);
        }      
    }

    if(sum%2 == 0 )
        cout << sum;
    else
        cout << sum - mnOdd;

    return 0;
}