#include <iostream>
using namespace std;

int main()
{
    int coins[] = {1, 2, 5};
    int n = 3;
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    int dp[1000];

    dp[0] = 0;

    for(int i = 1; i <= amount; i++)
    {
        dp[i] = 1000;

        for(int j = 0; j < n; j++)
        {
            if(coins[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if(dp[amount] == 1000)
        cout << "Not possible";
    else
        cout << "Minimum coins = " << dp[amount];

    return 0;
}
