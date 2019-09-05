#include <iostream>
#include <string.h>
#define INT 10000000
using namespace std;
// dp[(i-1+n)%n]   dp[(i-k+n)%n]
// Ç°Ò»¸ö +1          +k 
int dp[100008];
int main() 
{
	int n,k,maxn = 0;
	cin >> n >> k;
	for(int i = 0; i <= n; i++)
		dp[i] = INT;
	dp[0] = 0;
	for(int i = 1; i < n; i++) {
		dp[i] = min(dp[(i-1+n)%n],dp[(i-k+n)%n]) + 1;
		maxn = max(maxn,dp[i]);
	}
	cout << maxn;
	return 0;
 } 
