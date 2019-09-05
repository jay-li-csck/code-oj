#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int wall[3][10],ans = 0;
map<int,int> mp;
void dfs(int x,int y) 
{
	if(wall[x][y] == -1) { // 横向 两格 
		if(y < 9 && wall[x][y+1] == -1) {
			for(int i = 0; i < 2; i++) {
				wall[x][y] = wall[x][y+1] = i;
				dfs(x,y+1);
				wall[x][y] = wall[x][y+1] = -1;
			}
		}
		if(x < 2 && wall[x+1][y] == -1) {//纵向 
			for(int i = 0; i < 2; i++) {
				wall[x][y] = wall[x+1][y] = i;
				if(y == 9) 
					dfs(x+1,0);
				else
					dfs(x,y+1);
				wall[x][y] = wall[x+1][y] = -1;
			}
		}	
	}
	else {
		if(x == 2 && y == 9) {
			bool f = true;
			for(int i = 0; i < 2; i++) {
				for(int j = 0; j < 9; j++) {
					if((wall[i][j]+wall[i][j+1]+wall[i+1][j]+wall[i+1][j+1])%4 == 0)
					{
						f = false;
						break;
					}	
				}
			}
		
			if(f) {
				int n = 0;
				for(int i = 0; i < 3; i++) 
					for(int j = 0; j < 10; j++)
						n = n*2 + wall[i][j];
				mp[n]++;
				if(mp[n] == 1)
					ans++;		
			}
		}  
		if(y == 9)
			dfs(x+1,0);
		else 
			dfs(x,y+1);
	}
}
int main() 
{
	memset(wall,-1,sizeof(wall));
	dfs(0,0);
	cout << ans <<endl;
	return 0;
}
