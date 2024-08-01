//
// Created by Shahd El-Refai on 01/08/2024.
//
#include <iostream>
#include <cstring>
using namespace std;

const int maxN = 105, maxW = 100005;

int N, W, w[maxN], v[maxN];
long long dp[maxN][maxW];

long long knapsack(int n, int currentW)
{
    if (n >= N)
        return 0;
    if (dp[n][currentW] != -1)
        return dp[n][currentW];

    long long c1 = 0, c2 = 0;
    c1 = knapsack(n + 1, currentW);
    if (currentW >= w[n])
        c2 = knapsack(n + 1, currentW - w[n]) + v[n];

    return dp[n][currentW] = max(c1, c2);
}

int main()
{
    cin >> N >> W;
    for(int i = 0; i < N; i++)
        cin >> w[i] >> v[i];

    memset(dp, -1, sizeof(dp));

    cout << knapsack(0, W) << endl;

    return 0;
}