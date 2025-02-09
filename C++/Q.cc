#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    long long n;
    while(cin>>n) {
        if(n==0) break;

        cout << 1 + (n-1) % 9 << endl;
    }
}

int main() {
    int t=1; 
    // cin >> t;

    int tc=1;

    while(t--) {
        solve(tc++);
    }
    return 0;
}