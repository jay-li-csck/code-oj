#include <bits/stdc++.h>
using namespace std;
/*
1  2  3  4   左右相邻 +1 -1 
6  7  8  9   上下相邻 +5 -5 
11 12 13 14
*/
int aa[] = {1,2,3,4,6,7,8,9,11,12,13,14} ;
int vis[5] ,mp[5];
int sum = 0;
int dir[] = {-1,1,-5,5};
void dfs(int step)
{
	for(int i = 0 ; i < 4 ; i++)
	{
		int t = mp[step] + dir[i];
		if(t<1 || t>14 || t==5 || t ==10) continue;
		for(int j = 0 ; j < 5 ; j++ )
		{ 
			if(vis[j] == 0 && mp[j] == t)//遍历mp数组，判段是否相邻 
			{
				vis[j] = 1;
				dfs(j);
			}
		} 
	}
}

int main()
{
	for(int a = 0 ; a < 12 ; a++)
		for(int b = a+1 ; b < 12 ; b++)
			for(int c = b+1 ; c < 12 ; c++)
				for(int d = c+1 ; d < 12 ; d++)
					for(int e = d+1 ; e < 12 ; e++)
					{
						mp[0] = aa[a];
						mp[1] = aa[b];
						mp[2] = aa[c];
						mp[3] = aa[d];
						mp[4] = aa[e];
						memset(vis,0,sizeof(vis));
						vis[0] = 1;
						dfs(0);
						int flag = 0;
						for(int i = 0 ; i < 5 ; i++)
						{
							if(vis[i] == 0){
								flag = 1;break;
							}
						}
						if(flag == 0){
							sum++;
						}
					}
	
	cout << sum;
	return 0;
}
