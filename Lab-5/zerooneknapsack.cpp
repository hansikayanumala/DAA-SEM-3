#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    int weight[20], profit[20];

    cout << "Enter weights: ";
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cout << "Enter profits: ";
    for (int i = 0; i < n; i++)
        cin >> profit[i];

    cout << "Enter capacity: ";
    cin >> W;

    int dp[20][50] = {0};

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {

            if (weight[i - 1] <= w)
                dp[i][w] = max(profit[i - 1] +
                               dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    cout << "Maximum profit = " << dp[n][W];

    return 0;
}
