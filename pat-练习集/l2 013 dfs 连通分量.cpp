#include <iostream>
#include <string.h>
using namespace std;
int e[510][510] = {0};
int vis[510] = {0} ;
int n,m,k;
void dfs(int step)
{
	vis[step] = 1;
	for(int i = 0 ; i < n ; i++)
	{
		if(vis[i] == 0 && e[step][i] != 0)
			dfs(i);
	}
}
int countcnt()
{
	int cnt = 0;
	memset(vis,0,sizeof(vis));
	for(int i = 0 ; i < n ; i++)
	{
		if(vis[i] == 0){
		dfs(i);
		cnt++;
		}
	}
	return cnt;
}
int main()
{
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++)
	{
		int a,b;
		cin >> a >> b;
		e[a][b] = e[b][a] = 1;
	}
	int cnt = countcnt();
	cin >> k;
	for(int i = 0 ; i < k ; i++)
	{
		int x;
		cin >> x;
		for(int i = 0 ; i < n ; i++)
		{
			e[i][x] = e[x][i] = 0;
		}
		int t = countcnt();
		if(t > cnt+1)
			printf("Red Alert: City %d is lost!\n", x);
        else
            printf("City %d is lost.\n", x);
        cnt = t;
        if(i == n - 1) printf("Game Over.\n");
    }
	return 0;
 } 
