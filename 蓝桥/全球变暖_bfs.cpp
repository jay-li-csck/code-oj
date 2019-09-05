#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
	int num;
}now,next,s;
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int n,sum;
char mapa[1005][1005];
int vis[1005][1005] = {0};
bool in(int x,int y)
{
	if(x>=0&&y>=0&&x<n&&y<n)
		return true;
	return false;
}
bool check(int x,int y)
{
	for(int i = 0 ; i < 4 ; i++)
	{
		int x1 = x + dir[i][0];
		int y1 = y + dir[i][1];
		if(mapa[x1][y1] == '.' && in(x1,y1))
			return true;
	}
	return false;
}
void bfs()
{
	queue<node> q;
	s.num = sum;
	q.push(s);
	while(!q.empty())
	{
		now = q.front();
		q.pop();
		if(check(now.x,now.y))//检查四周有无海水 
			vis[now.x][now.y] = 1;//1为海水 
		for(int i = 0 ; i < 4 ; i++)	
		{
			next.x = now.x + dir[i][0];
			next.y = now.y + dir[i][1];
			if(in(next.x,next.y) && mapa[next.x][next.y] == '#' && vis[next.x][next.y] != 1 )
			{
				if(vis[next.x][next.y] == 0 )
					vis[next.x][next.y] = 2;
					next.num = now.num;
					q.push(next);
				}	
			}	
		}
	sum++;
	return ;
}
int main()
{
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%s",&mapa[i]);
	}
	sum = 0;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
		{
			if(mapa[i][j] == '#')
			{
				if(vis[i][j] != 0)
					continue;
				s.x = i;
				s.y = j;
				bfs();	
			}		
		}
	for(int i = n-1 ; i >= 0 ; i--)
		for(int j = n-1 ; j >= 0 ; j--)
		{
			if(mapa[i][j] == '#' && vis[i][j] == 2)
				sum--;
		}
	printf("%d\n",sum>0?sum:0);
	
	
	return 0;
}
