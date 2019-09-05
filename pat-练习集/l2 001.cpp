#include <bits/stdc++.h>
using namespace std;
int n ,m ,s,d,num,sum;
int a[1000][1000] = {-1};
int an[1000];
vector<int> v;
void bfs(int s)
{
	if(s == d){
		return ;	
	}
	for(int i = 0 ; i < m ; i++)
	{
		if(a[s][i] == -1) continue;
		num++;
		sum += an[i];
		v.push_back(i);
		bfs(i);
		num--;
		sum -= an[i];
		v.pop_back();
	}
}
int main()
{
	cin >> n >> m >> s >> d;
	for(int i = 0 ; i < n ; i++)
		cin >> an[i]; 
	for(int i = 0 ; i < m ; i++)
	{
		int x,y,k;
		cin >> x >> y >> k;
		a[x][y] = k; 
	}
	bfs(s);
	int f = 0;
	cout << num <<" "<< sum << endl;
	for(int i = 0 ; i < v.size() ; i++){
		if(f == 1) cout << " ";
		cout << v[i];f =1;
	}
	
	return 0;
}
