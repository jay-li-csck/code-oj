#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ans = 0;
//  12张牌  多少种组合 
//       点数       牌数 
void dfs(int idx,int cur) 
{
	if(cur == 13)	{
		ans++;
		return ;
	}
	if(idx > 13 || cur >13) return ;
	for(int i = 0; i < 5; i++)
		dfs(idx+1,cur+i);
	 
}
int main()
{
	dfs(1,0);
	cout << ans;
	return 0; 
}
