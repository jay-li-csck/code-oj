#include <iostream> 
using namespace std;
int n;
int mp[11][11];
int mp1[11][11];

int f() 
{
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(mp[i-1][j] < mp[i][j-1]) {
				mp[i][j] += mp[i][j-1];		
			}
			else {
				mp[i][j] += mp[i-1][j];
			}	
		}
	}
	return mp[n][n];
}
int main()
{
	cin >> n;
	int a,b,c; 
	int ans = 0;
	while(1) {
		cin >>a >> b>> c;
		if(a == 0 && b == 0 && c == 0) break;
		mp[a][b] = c;
		mp1[a][b] = c;
	}	

	ans = f();
	b = ans;

	while(b > 0) {
		for(int i = 1; i <= n; i++) {
		int f = 0;
			for(int j = 1; j <= n; j++) {
				if(b == mp[i][j]) {
					b -= mp1[i][j];
					mp1[i][j] = 0;
					f = 1;break;
				}	
			}
			if(f == 1) break;
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(mp1[i-1][j] < mp1[i][j-1]) {
				mp1[i][j] += mp1[i][j-1];		
			}
			else {
				mp1[i][j] += mp1[i-1][j];
			}	
		}
	}

	ans += mp1[n][n];
	cout <<ans; 
	return 0;
}
