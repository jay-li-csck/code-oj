#include <bits/stdc++.h>
using namespace std;
int main() // 排序 每次都减半  从最小的开始减 
{
	int x,a;
	cin>>a;	vector<int> v(a);
	for(int i = 0 ; i < a ; i++)
	{
		cin>>x;
		v[i] = x;
	}
	sort(v.begin(),v.end());
	int result = v[0];
	for(int i = 0 ; i < a ; i++)
	{
		result = (result+v[i])/2;
	}
	cout<<result;
	return 0; 
 } 
