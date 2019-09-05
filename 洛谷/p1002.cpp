#include <iostream> 
using namespace std;
int b1,b2,m1,m2;
int ans = 0;
int mp[25][25];
int dx[9] = {0,-2,-1,1,2,2,1,-1,-2};
int dy[9] = {0,1,2,2,1,-1,-2,-2,-1};
long long dp[21][21] = {1};
bool mark [21][21]; 

int main()
{
	cin >> b1 >> b2 >> m1 >> m2;
	for(int i = 0; i < 9; i++) {
		int x = m1+dx[i],y = m2+dy[i];
		if(x >= 0 &&  x < b1 && y >=0 && y < b2)
		mark[x][y] = 1;
	}
	for(int i = 0; i <= b1; i++) {
		for(int j = 0; j <= b2; j++) {
			if(i) 
				dp[i][j] += dp[i-1][j];
			if(j)
				dp[i][j] += dp[i][j-1];
			dp[i][j] *= !mark[i][j];
		}
	}
	cout << dp[b1][b2];
	return 0;
}
/*
void dfs (int x, int y) {
	if(mp[x][y] == 1 || x > b1 || y > b2)
	 return ;
	if(x == b1 && y == b2) {
		ans++;
		return ;
	} 
	dfs(x+1,y);
	dfs(x,y+1);
}

int main()
{
	cin >> b1>> b2>> m1>> m2;
	for(int i = 0; i < 25; i++)
	for(int j = 0; j < 25; j++)
		mp[i][j] = 0;
	for(int i = 0; i < 9; i++) {
		int x = m1+dx[i],y = m2+dy[i];
	//	cout << x << " " << y<< " ";
		if(x < 0 || x > 20 || y < 0 || y > 20) 
			continue;
		mp[x][y] = 1;
	}
	cout << endl;
	for(int i = 0; i < 25; i++){	
	for(int j = 0; j < 25; j++)
		cout<< mp[i][j] << " ";
		cout<< endl;
		}
	dfs(0,0);
	cout << ans;
	return 0;
 } */
