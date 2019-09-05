#include <iostream>
using namespace std;
int main()
{
	int a[100001] = {0};
	int b[100001] = {0};
	int n,k,m,x,f = 0 ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> k;
		for(int j = 0; j < k ; j++)
		{
			cin >> x;
			if(k != 1) a[x] = 1;
		}
	}
	cin >> m;
	for(int i = 0 ; i < m ; i++)
	{	 
		cin >> x;
		if(b[x] == 0 && a[x] == 0){		
			if(f == 1)cout << " "; 
			printf("%.5d",x);
			f = 1;
		}
		b[x] = 1;
	}
	if(f == 0) cout << "No one is handsome";
	return 0;
}
