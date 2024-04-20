#include <stdio.h>

int countWays(int n) {
    int dp[n + 1];
    dp[0] = dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Batuhan'ýn sahip olduðu badem þekeri sayýsýný girin: ");
    scanf("%d", &n);
    printf("Batuhan'ýn badem þekeri bitirme þekilleri: %d\n", countWays(n));
    return 0;
}

