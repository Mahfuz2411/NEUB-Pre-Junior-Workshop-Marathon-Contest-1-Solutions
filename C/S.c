#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    int oc = 0, ec = 0;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);

        if (a % 2) oc++;
        else ec++;
    }

    printf("%d\n", oc * ec);
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