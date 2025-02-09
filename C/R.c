#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    while (n != 1) {
        if (n == 2) {
            n--;
        } else if (n % 3 == 0) {
            n /= 3;
        } else if ((n + 1) % 3 == 0) {
            n += 1;
            n /= 3;
            cnt++;
        } else if ((n - 1) % 3 == 0) {
            n -= 1;
            n /= 3;
            cnt++;
        }

        cnt++;
    }

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
