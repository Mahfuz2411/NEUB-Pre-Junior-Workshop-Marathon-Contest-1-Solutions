#include <stdio.h>

void solve(int tc) {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", 2 * a * b);
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
