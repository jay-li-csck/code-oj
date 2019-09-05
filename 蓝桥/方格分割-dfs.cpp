#include <bits/stdc++.h>
using namespace std;
//ÖÐÐÄ¶Ô³Æ 
const int n = 6;
int sum = 0;
int vis[n][n] = {0};
int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
void dfs(int x,int y)
{
	if(x == 0 || x == n || y == 0 || y == n)
	{
		sum++;
		return ;
	}
	for(int i = 0 ; i < 4 ; i++)
	{
		int x1 = x + dir[i][0];
		int y1 = y + dir[i][1];
		if(vis[x1][y1]) continue;
		vis[x1][y1] = 1;
		vis[n-x1][n-y1] = 1;	
		dfs(x1,y1);
		vis[x1][y1] = 0;
		vis[n-x1][n-y1] = 0;
	}	
}
int main()
{
	vis[3][3] = 1;
	dfs(3,3);
	cout << sum/4;
	return 0;
 } 
