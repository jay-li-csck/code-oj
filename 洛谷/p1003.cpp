#include <iostream> 
using namespace std;

int mp[10010][4] ;

int main()
{	
	int n,a,b;
	cin >> n;
	for(int i = 1; i <= n; i++ ) {
		cin >> mp[i][0] >> mp[i][1] >> mp[i][2] >> mp[i][3];
	}
	cin >> a >> b;
	for(int i = n; i >=1; i--) {
		if((mp[i][0] <= a && mp[i][2]+mp[i][0] >= a) && ((mp[i][1] <= b) && mp[i][1]+mp[i][3] >= b)) 
		{
			cout << i;
			break;
		}
		if(i == 1 ) {
			cout << -1;	
		}
	}

	return 0;	
}
