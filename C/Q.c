#include <stdio.h>

void solve(int tc) {
    long long n;
    while (scanf("%lld", &n) != EOF) {
        if (n == 0) break;

        printf("%lld\n", 1 + (n - 1) % 9);
    }
}

int main() {
    int t = 1;
    // scanf("%d", &t);

    int tc = 1;

    while (t--) {
        solve(tc++);
    }
    return 0;
}
