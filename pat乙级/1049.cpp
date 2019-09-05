#include <iostream>  
#include <vector>
using namespace std;   
int main()
{
	int n;cin>>n;
	double ans = 0.0;
	double a[100001];
	for(int  i = 1 ; i <= n ; i++){
		cin>>a[i];
		ans += i * a[i] * (n - i + 1);
	}

	printf("%.2f",ans);
	return 0;
}
