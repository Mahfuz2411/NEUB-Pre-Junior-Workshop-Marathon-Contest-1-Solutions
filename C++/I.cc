#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;   cin>>n;

    long long sum=0;

    for(int i=0; i<n; i++) {
        int a;   cin>>a;

        if(a>0)  sum += a;
    }

    cout << "Case "<<tc<<": " << sum << endl;
}

int main() {
    int t=1; 
    cin >> t;

    int tc=1;

    while(t--) {
        solve(tc++);
    }
    return 0;
}