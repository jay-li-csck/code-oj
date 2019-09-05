#include <bits/stdc++.h>
using namespace std;
map<string,int> cnt;
int main()
{
	int n,m,ans = 0;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		string s = "";
		for(int j = 0 ; j < m ; j++)
		{	
			char x ; cin >> x;
			s += x;	
		}
		cnt[s]++;
	}	
	
	for(map<string,int>::iterator it = cnt.begin() ; it != cnt.end(); it++) 
	{	
		string s = "";
		for(int j = 0 ; j < m ; j++)
			if(it->first[j] == '0') s+='1';
			else s+='0';//s与原字符串相反   相反的相乘<string,int> 
		ans += cnt[s]*it->second;
	}
	cout << ans/2; 
	return 0;
}
