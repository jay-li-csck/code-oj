#include <iostream>
#include <algorithm>
using namespace std;
int n,k,best = 10000000;
int maxx,maxy,minx,miny;
int a[10],vis[55];
struct node {
	int x,y;
}w[510];
bool cmp(node a,node b) {
	if(a.x < b.x) return true;
	if(a.x == b.x && a.y < b.y) return true;
	return false;
}
bool cmp1(node a,node b) {
	if(a.y < b.y) return true;
	if(a.y == b.y && a.x < b.x) return true;
	return false;
}
void prin() {
	int ans = 0;
	maxx = maxy = 0;
	minx = miny = 1000000;
	for(int i = 1; i <= k; i++) {
		for(int j = a[i-1]+1; j <= a[i]; j++) {
			maxx = max(w[j].x,maxx);
			maxy = max(w[j].y,maxy);
			minx = min(w[j].x,minx);
			miny = min(w[j].y,miny);
		}
		ans += (maxx-minx) * (maxy-miny);
		maxx = maxy = 0;
		minx = miny = 100000;
	}
	if(ans < best) 
		best = ans;
}
void dfs(int st) 
{
	if(st == k) {
		prin();
		return ;
	}
	for(int i = a[st-1]+1; i <= n; i++) {
		if(!vis[i]) {
			vis[i] = 1;
			a[st] = i;
			dfs(st+1);
			vis[i] = 0;
		}
	}
}
int main()
{
	cin >> n >>k;
	for(int i = 1; i <= n; i++) {
		cin >> w[i].y >> w[i].x;
	}
	sort(w+1,w+n+1,cmp);
	a[k] = n;
	dfs(1);
	sort(w+1,w+n+1,cmp1);
	dfs(1);
	cout << best;
	return 0;	
}
