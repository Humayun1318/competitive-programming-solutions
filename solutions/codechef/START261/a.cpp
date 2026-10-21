#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y; cin >> x >> y;
	
	if(x>y){
	    cout << (x-y)-1 << "\n";
	}else{
	    cout << (y-x)-1 << '\n';
	}

}
