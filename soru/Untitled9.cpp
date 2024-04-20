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
    printf("Batuhan'�n sahip oldu�u badem �ekeri say�s�n� girin: ");
    scanf("%d", &n);
    printf("Batuhan'�n badem �ekeri bitirme �ekilleri: %d\n", countWays(n));
    return 0;
}

