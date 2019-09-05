#include <iostream>
using namespace std;
int main()
{//     该容量下最大价值 
	int dp[1000] = {0};
// 时间 数量   时间数组 价值数组 
	int t,s,v[1000] = {0},w[1000]  = {0};
	cin >> t >> s;
	for(int i = 0; i < s; i++) {
		cin >> v[i] >> w[i];
	}	
	for(int i = 0; i < s; i++) 
		for(int j = t; j >= v[i]; j--)//  不选  选
			dp[j] = dp[j] > dp[j-v[i]]+w[i] ? dp[j] : dp[j-v[i]]+w[i];
	cout << dp[t]; 
	return 0;
}
