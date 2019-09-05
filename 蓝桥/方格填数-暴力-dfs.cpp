#include <bits/stdc++.h>
using namespace std;
/*
  1 2 3  0-9数字填入连续数字不相邻 
4 5 6 7		左右、上下、对角都算相邻
8 9 10  

next_premutation()全排列 
*/ 
int a[3][4] = {-20};
int vis[10];
int sum ;
int dir[4][2] = {{0,-1},{-1,-1},{-1,0},{-1,1}};//左 左下 下 左上 
int judge(int x,int y,int v){
	for(int i = 0 ; i < 4;i++)
	{
		int x1 = x + dir[i][0];
		int y1 = y + dir[i][1];
		if(x1 >= 0 && y1 >= 0 && x1 < 3 && y1 < 4){
			if(abs(v - a[x1][y1]) == 1 )
				return 0;
			}
	} 
	return 1;
}
void dfs(int x,int y)
{
	if(x == 2 && y == 3)
	{
		sum++;
		return ;
	}
	for(int i = 0; i < 10 ; i++ )
	{
		if(!vis[i] && judge(x,y,i)){
			vis[i] = 1;
			a[x][y] = i;
			if(y+1 < 4)
				dfs(x,y+1);
			else
				dfs(x+1,0);		
			vis[i] = 0;
		} 
	}
}
int main()
{
	sum = 0;
	memset(vis,0,sizeof(vis));
	dfs(0,1);
	cout << sum;
	return 0;
}


/*


int a[11] = {11,0,1,2,3,4,5,6,7,8,9};
int judge()
{
	if(abs(a[1]-a[2]) == 1 || abs(a[1]-a[4]) == 1 ||abs(a[1]-a[5]) == 1 ||abs(a[1]-a[6]) == 1 )
		return 0;
	if(abs(a[2]-a[3]) == 1 || abs(a[2]-a[5]) == 1 ||abs(a[2]-a[6]) == 1 ||abs(a[2]-a[7]) == 1 )
		return 0;
	if(abs(a[3]-a[6]) == 1 || abs(a[3]-a[7]) == 1  )
		return 0;
	if(abs(a[4]-a[5]) == 1 || abs(a[4]-a[8]) == 1 || abs(a[4]-a[9]) == 1 )
		return 0;
	if(abs(a[5]-a[6]) == 1 || abs(a[5]-a[8]) == 1 || abs(a[5]-a[9]) == 1 || abs(a[5]-a[10]) == 1  )
		return 0;
	if(abs(a[6]-a[7]) == 1 || abs(a[6]-a[9]) == 1 || abs(a[6]-a[10]) == 1 )
		return 0;
	if(abs(a[7]-a[10]) == 1  )
		return 0;
	if(abs(a[8]-a[9]) == 1 )
		return 0;
	if(abs(a[9]-a[10]) == 1 )
		return 0;
	return 1;
}
int main()
{
	int sum = 0;
	while(next_permutation(a+1,a+11)){
		if(judge())
		sum++;
	}
	cout << sum;
	return 0;
}*/
