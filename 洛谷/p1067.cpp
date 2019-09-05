#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	for(int i = n; i >= 0; i--) {
		cin >> x;
		if(x == 0) continue;
        if(i != n && x > 0) cout << "+";     //  根据正负、是否为最高此项决定加号
        if(abs(x) != 1 || i == 0) cout << x;     //  输出系数（系数不为正负1或指数为0）
        if(x == -1  && i) cout << "-";     //  -1系数特判，常数项已特判
        if(i >= 2) cout << "x^" << i;     //  二次及以上输出指数
        if(i == 1) cout << "x";     // 一次项
		
	}
	
	return 0;
}
