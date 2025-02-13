#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    int cnt = n / 5;
    if (n % 5 > 0) cnt += 1;

    printf("%d\n", cnt);
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
