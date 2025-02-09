#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;   cin>>n;

    int cnt = 0;

    while (n!=1) {
        if(n==2)  {
            n--;
        }
        else if(n%3 == 0)  {
            n/=3;
        }
        else if((n+1)%3 == 0)   {
            n += 1;
            n /= 3;
            cnt ++;
        }
        else if((n-1)%3 == 0) {
            n -= 1;
            n /= 3;
            cnt ++;
        }
        
        cnt ++;
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