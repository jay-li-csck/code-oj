#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000;
struct Node{
	int add;
	int key;
	int next;
	int num;
}node[maxn]; 
bool exist[maxn] ;
int cmp(Node a,Node b)
{
	return a.num < b.num;
}
int main()
{
	int sa,n,t;
	cin >> sa >> n;
	for(int i = 0 ; i < maxn ;i++)
		node[i].num = maxn*2;
	
	for(int i = 0 ; i < n ;i++)
	{
		int a1,b1,c1;
		cin >> a1 >> b1 >> c1;
		node[a1].key = b1;
		node[a1].next = c1;
		node[a1].add = a1; 
	}
	int cnt,cnt1 = 0,cnt2 = 0;
	for(int i = sa ; i != -1 ; i = node[i].next)
	{
		if(exist[abs(node[i].key)] == false)
		{
			exist[abs(node[i].key)] == true; 
			node[i].num = cnt1;
			cnt1++;
		}
		else{
			node[i].num = maxn + cnt2;
			cnt2++;
		}
	}
	sort(node,node+maxn,cmp);
	cnt = cnt1 + cnt2; 
	for(int i = 0 ; i < cnt ;i++)
	{
		if(i != cnt-1 && i != cnt1 -1)
		{
			printf("%05d %d %05d\n",node[i].add,node[i].key,node[i+1].add);
		}
		else{
			printf("%05d %d -1\n",node[i].add,node[i].key);
		}
	}
	
	return 0;	
}
