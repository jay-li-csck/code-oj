#include <iostream>  
#include <vector> 
#include <algorithm> 
// cmp ½á¹¹Ìåvector   
struct node{int a,b,c;};
using namespace std;   
bool cmp(struct node x,struct node y)
{
	if((x.b + x.c) != (y.b + y.c))
		return  (x.b + x.c) > (y.b + y.c);
	if(x.b != y.b)
		return x.b > y.b;
	else 
		return x.a < y.a;
}
int main()
{
	int N,L,H;
	vector<node> a[4];
	cin>> N >> L >> H;
	node t;
	int total = N;
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d %d",&t.a,&t.b,&t.c);
		if(t.b < L || t.c < L) total--;
		else if(t.b >= H && t.c >= H)
		{
			a[0].push_back(t);
		}
		else if(t.b >= H && t.c < H)
		{
			a[1].push_back(t);
		}
		else if(t.b < H && t.c < H && t.b >= t.c)
		{
			a[2].push_back(t);
		}
		else 
			a[3].push_back(t);
	}
	cout << total << endl;
	for(int i = 0 ; i < 4 ; i++){
		sort(a[i].begin(),a[i].end(),cmp);
		for(int j = 0 ; j < a[i].size() ; j++)
			cout << a[i][j].a << " " << a[i][j].b << " " << a[i][j].c << endl; 	
	}
	return 0;
}
