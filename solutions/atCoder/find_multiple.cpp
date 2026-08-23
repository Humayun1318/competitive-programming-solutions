#include <bits/stdc++.h>
using namespace std;

int findMultiple(int a, int c){
    return ((a + c - 1) / c) * c;
}

// brute force solution
int findMultipleBruteforce(int a, int b, int c){
    for(int i=a; i<=b; i++){
        if(i%2 == 0){
            return i;
        }
    }

    return -1;
}

int main() {

    int a,b,c; cin >> a >> b >> c;
    int ans = findMultiple(a,c);
    // int ans = findMultipleBruteforce(a, b, c);
    if(a < ans && ans <= b){
        cout << ans << "\n";
    }else{
        cout << -1 << "\n";
    }

    return 0;
}