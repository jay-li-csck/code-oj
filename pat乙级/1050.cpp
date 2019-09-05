#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int cmp(int a,int b){return a > b;}
int main()
{
	int N,n,m;
	cin >> N;
	for(n = sqrt((double)N); n >= 1; n-- ){
		if(N%n == 0){
			m = N / n;
			break;
		}
	}
	vector<int> a(N);
	for(int i = 0; i < N; i++){
		scanf("%d",&a[i]);
	}
	int k = 0;
	sort(a.begin(),a.end(),cmp);
	vector<vector<int> > b(m,vector<int>(n));
	int level = m/2 + m%2;
	for(int i = 0; i < level; i++){
		for(int j = i; j <= n-i-1 && k <= N-1; j++){
			b[i][j] = a[k++];
		}
		for(int j = i+1; j <= m-i-2 && k <= N-1; j++){
			b[j][n-i-1] = a[k++]; 
		}
		for(int j = n-i-1; j >= i && k <= N-1; j--){
			b[m-i-1][j] = a[k++]; 
		}
		for(int j = m-2-i; j >= i+1 && k <= N-1; j--){
			b[j][i] = a[k++]; 
		}
	}
	for(int i = 0 ; i < m; i++){
		for(int j = 0 ; j < n ; j++){
			cout << b[i][j];
			if(j != n-1) cout << " ";
		}
		cout << endl;
	}
	return 0; 
}
