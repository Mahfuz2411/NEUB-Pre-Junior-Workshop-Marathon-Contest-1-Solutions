#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n; 
    cin >> n;

    // oc -> odd count
    // ec -> even count
    int oc=0, ec=0;

    for(int i=0; i<n; i++) {
        int a; 
        cin>>a;

        if(a%2) oc++;
        else ec++;
    }

    cout << oc*ec << endl;
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