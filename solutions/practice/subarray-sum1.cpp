#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x; cin >> n >> x;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    long long sum = 0;
    long long ans = 0;
    int left = 0;
    for(int r=0; r<n; r++){
        sum += v[r];

        while(sum > x){
            sum -= v[left++];
        }
        if(sum == x)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}