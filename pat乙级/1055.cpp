#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node{
	int height;
	string name;
};
bool cmp(node a,node b){
	if( a.height != b.height) 
		return a.height > b.height;
	else 
		return a.name < b.name;
}
int main()
{
	int n,k,x;
	string s;
	cin >> n >> k;
	vector<node> v(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i].name >> v[i].height;
	}
	sort(v.begin(),v.end(),cmp);
	int row = k,m,t = 0;
	while(row){	
		if(row == k)
			m = n - n/k*(k-1);
		else m = n/k;
		vector<string> ans(m);
		ans[m/2] = v[t].name;
		int j = m/2 - 1;
		for(int i = t + 1 ; i < m+t ;i = i+2)
		{
			ans[j--] = v[i].name;
		}
		j = m/2 + 1;
		for(int i = t + 2 ; i < m+t ;i = i+2)
		{
			ans[j++] = v[i].name;
		}
		cout << ans[0];
		for(int i = 1 ; i < ans.size() ; i++)
		{
			cout << " " << ans[i];
		}
		cout << endl;
		row--;
		t = t + m; 
	}
	return 0;
}
