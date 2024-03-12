#include <bits/stdc++.h>

using namespace std;

int countWays(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 && j <= i; j++)
        {
            dp[i] += dp[i - j];
        }
    }
    return dp[n];
}

int main()
{
    freopen("dice_problem_test_files.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        if(n<0){
            cout<<"Output: -1"<<endl;
            continue;
        }
        int ways = countWays(n);
        cout <<"Output: "<<ways << endl;

    }
    return 0;
}