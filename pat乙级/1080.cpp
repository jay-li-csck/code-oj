#include <bits/stdc++.h>
using namespace std;
struct node{
	string name;
	int gp,gm,gf,g;
};
bool cmp (node a, node b){
	return a.g != b.g ? a.g > b.g : a.name < b.name;
}
int main()
{
	int p,m,n,x,cnt = 1;
	string s;
	cin >> p >> m >> n;
	map<string,int> mapa;
	vector<node> a,ans;
	for(int i = 0 ; i < p ; i++)	
	{
		cin >> s >> x;
		if(x >= 200){
			mapa[s] = cnt++;
			a.push_back({s,x,-1,-1,0});
		}
	}
	for(int i = 0 ; i < m ; i++)	
	{
		cin >> s >> x;
		if(mapa[s] != 0) a[mapa[s]-1].gm = x;
	}
	for(int i = 0 ; i < n ; i++)
	{
		cin >> s >> x;
		if(mapa[s] != 0){
			a[mapa[s]-1].gf = x;
			if(a[mapa[s]-1].gm < a[mapa[s]-1].gf ) 
				a[mapa[s]-1].g = a[mapa[s]-1].gf;
			else
				a[mapa[s]-1].g = int(a[mapa[s]-1].gm*0.4 + a[mapa[s]-1].gf*0.6 + 0.5);   
		} 
	}	
	for(int i = 0 ; i < a.size() ; i++)
	{
	 	if(a[i].g >= 60) ans.push_back(a[i]);
	}
	sort(ans.begin(),ans.end(),cmp);
	for(int i = 0 ; i < ans.size() ; i++)
	{
		cout << ans[i].name << " " << ans[i].gp <<" " <<  ans[i].gm;
		cout << " " << ans[i].gf << " " << ans[i].g << endl;  
	}
	return 0;
}
