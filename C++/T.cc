#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;     cin>>n;

    vector <int> v(n);
    

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }


    sort(v.begin(), v.end());


    long long sum = 0;

    for(int i=1; i<n; i+=2) {
        sum += (v[i] - v[i-1]);
    }

    cout << sum << endl;

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