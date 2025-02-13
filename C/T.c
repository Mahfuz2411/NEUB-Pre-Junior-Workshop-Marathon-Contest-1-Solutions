#include <stdio.h>

void solve(int tc) {
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    long long sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += (v[i] - v[i - 1]);
    }

    printf("%lld\n", sum);
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
