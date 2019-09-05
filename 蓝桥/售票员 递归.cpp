#include <iostream>
using namespace std;
//   五角  一元  售票员五角 
int f(int m,int n,int c)
{
	if(c < 0) return 0;
	if(m == 0 && n == 0) return 1; //完成
	if(m == 0)
		return f(m,n-1,c-1);
	if(n == 0)
		return f(m-1,n,c+1);
	return 
		f(m,n-1,c-1)+f(m-1,n,c+1);
} 
int main()
{
	cout<<f(1,2,0)<<endl;
	cout<<f(2,2,0)<<endl;
	cout<<f(3,2,0)<<endl;
	cout<<f(5,2,0)<<endl;
	return 0;
}
