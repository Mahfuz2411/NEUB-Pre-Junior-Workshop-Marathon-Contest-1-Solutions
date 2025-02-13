#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) cnt++;
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