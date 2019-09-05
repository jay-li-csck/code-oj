#include <iostream>
using namespace std;
int a[101];
int main()
{
	int n,ans = 0;
	cin >> n;
	for(int i = 1 ; i <= n ;i++)
	{
		cin >> a[i];
	}
	
		
	for(int i = 1; i <=n; i++) {
		for(int j = i; j <=n; j++) {
			int b[101] = {0};
			int maxn = -1; 
			for(int L = i; L <= j;L++) {
				if(a[L] > maxn) {
					maxn = a[L];
				}
				b[L] = maxn;
			}
			int m = -1;
			for(int L = i; L <= j;L++) {
				int ma = b[L]*(j-L+1)*(L-1);
				if(m < ma);
					m = ma;
				//ans = (ans + m)%1000000000;
			}
			ans = (ans + m);
		}
	}
	cout << ans+7 ;
	return 0;
}
