#include <iostream>
using namespace std;
int main(){
	int  m,n,x = 0;double m1 = 0.0,ans = 0;
	cin>>m>>n;
	double A[3][m] ;
	for(int i = 0; i < m; i++)cin>>A[0][i];
	for(int i = 0; i < m; i++)cin>>A[1][i];
	for(int i = 0; i < m; i++)A[2][i] = A[1][i] / A[0][i] ;
	while(n>0){
		for(int i = 0; i < m; i++ ){
			if(m1 < A[2][i] ){
				m1 = A[2][i];
				x = i;
			}
		}
		if(n>A[0][x]){//此种月饼库存少于需求 
			ans += A[1][x];
			n -= A[0][x];
			A[2][x] = m1 = 0; 
		}
		else{
			ans += A[2][x] * n;
			n = 0;
		}
	}
	printf("%.2f",ans);
	return 0;
}
