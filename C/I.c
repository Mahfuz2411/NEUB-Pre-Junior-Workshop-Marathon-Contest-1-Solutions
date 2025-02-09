#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);

        if (a > 0) sum += a;
    }

    printf("Case %d: %lld\n", tc, sum);
}

int main() {
    int t = 1;
    scanf("%d", &t);

    int tc = 1;

    while (t--) {
        solve(tc++);
    }

    return 0;
}