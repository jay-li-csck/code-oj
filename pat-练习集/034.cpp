#include <iostream>
using namespace std;
int main()
{
	int n,x,max = -1,maxi;
	int a[1001] = {0};
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int t;
		cin >> x;
		for(int j = 0 ; j < x ; j++)
		{
			cin >> t;			
			a[t]++;
			if( max <= a[t] ){
				max = a[t];
			}
		}
	}	
	
	for(int i = 1000 ; i >= 0 ; i--)
	{
		if(a[i] == max){
			cout << i;
			break;			
		} 
	}
	cout << " " << max ;
	return 0;
}
