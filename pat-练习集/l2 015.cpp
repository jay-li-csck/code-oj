#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cmp(int a,int b)
{
	return a > b;
}
int main()
{
	int n,k,f,m;
	cin >> n >> k >> m;	vector<double> v(n);
	for(int i = 0 ; i < n ; i++)
	{	
		vector<int> v1(k);
		int x = 0; 
		for(int j = 0 ; j < k ; j++)
		{
			cin >> f;cout <<f; 
			v1.push_back(f);
		}	
		sort(v1.begin(),v1.end());
		for(int a = 1 ; a < k-1 ; a++)
			x += v1[a];
		cout <<" "<< x<<endl;
	//	x /= (k-2);
		v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	f = 0;
	for(int i = 0 ; i < m ; i++)
	{
		if(f == 1 ) cout << " ";
		printf("%0.3f",v[i]);
		f = 1;
	}
	return 0;
}
