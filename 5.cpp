//https://practice.geeksforgeeks.org/problems/coin-change/0
//Complexity : O(m*n)
//Space: O(n)
#include <bits/stdc++.h>
using namespace std;
int c[500];
int dp[500];
int main()
{
	int t, m, n;
	cin >> t;
	while (t--)
	{
		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			cin >> c[i];
		}
		cin >> n;
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		
		for (int i = 0; i < m; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (j >= c[i])
					dp[j] += dp[j - c[i]];
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}