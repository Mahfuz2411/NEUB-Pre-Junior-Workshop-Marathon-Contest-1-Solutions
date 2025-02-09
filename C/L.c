#include <stdio.h>
#include <stdlib.h>

void solve(int tc) {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", llabs(a - b));
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
