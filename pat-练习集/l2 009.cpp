#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
	double sum;
	int num,getnum;
};
int cmp(node a,node b )
{
	if(a.sum != b.sum)
		return a.sum > b.sum;
	else if(a.getnum != b.getnum)
		return a.getnum > b.getnum;
	else 
		return a.num < b.num;
}
int main()
{
	int n,m;
	cin >> n;
	vector<node> v(n);
	for(int i = 0 ; i < n ; i++){
		v[i].num = 0;
		v[i].sum = 0;
	}
	for(int i = 0 ; i < n ; i++)
	{
		v[i].num = i;
		cin >> m;
		int n1 = 0,p1 = 0 ,p = 0;
		for(int j = 0 ; j < m ; j++)
		{
			cin >> n1 >> p1;
			v[n1-1].sum += p1;
			v[n1-1].getnum++;	
			v[i].sum -= p1;
		}
		
	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0 ; i < n ; i++)
		printf("%d %.2f\n",v[i].num+1,v[i].sum/100);
	return 0;
}
