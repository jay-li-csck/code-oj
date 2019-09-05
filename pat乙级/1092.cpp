#include <iostream>
using namespace std;
int main()
{
	int n,m,max = 0,f = 0;
	cin>>n>>m;
	int a[n] = {0};
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			{
				int x;
				cin>>x;a[j] += x;
			}
	}
	for(int j = 0; j < n; j++)
	{
		if(max < a[j])max = a[j];
	}
	cout<<max<<endl;
	for(int j = 0; j < n; j++)
	{
		
		if(max == a[j]){
			if(f == 1)cout<<" ";
			cout<<j + 1;f=1;
		}
	}
	return 0;
}
