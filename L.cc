#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    long long a, b;
    while (cin>>a>>b) {
        cout << abs(a-b) << endl;
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