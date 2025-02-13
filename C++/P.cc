#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;   cin>>n;

    string s;   cin>>s;

    int cnt = 0;
    for(int i=1; i<n; i++) {
        if(s[i]==s[i-1]) cnt++;
    }

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