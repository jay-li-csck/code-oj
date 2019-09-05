#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	map<int,vector<int> > mapa;
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++)
	{
		int a,b;
		cin >> a >> b;
		mapa[a].push_back(b);
		mapa[b].push_back(a);
	}
	for(int i = 0 ; i < m ; i++)
	{
		int x,b,f = 0,a[100001] = {0};		
		cin >> x;
		vector<int> v(x);
		for(int j = 0 ; j < x ; j++){
			cin >> b;v[j] = b;
			a[v[j]] = 1;
		}
		for(int j = 0 ; j < v.size() ; j++)
			for(int k = 0 ; k < mapa[v[j]].size() ; k++)
				if(a[mapa[v[j]][k]] == 1) f = 1;
			printf("%s\n",f ? "No" :"Yes");
	}
	return 0;
}
