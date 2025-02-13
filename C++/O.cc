#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;     
    cin>> n;

    int cnt = n/5;
    if(n%5 > 0) cnt += 1;


    cout << cnt << endl;
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