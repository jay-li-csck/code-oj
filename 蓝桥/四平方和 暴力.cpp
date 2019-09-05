#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main()
//先map存下两个数平方和    
{
	int n; 
	cin >> n;
	map<int,int> mapa;
	int m = sqrt(n);
	for(int a = 0 ; a < m ; a++)
	for(int b = a ; b < m ; b++)
	{
		mapa[a*a + b*b] = 1;
	}
	for(int a = 0 ; a < n ; a++)
		for(int b = a ; b < n ; b++)
		{//n-两个数平方和是否能表示为两个数平方和 
			if(mapa[n - a * a - b * b] != 1) continue;
			for(int c = b ; c < m ; c++)
			{//temp为整数符合条件 
			double temp = sqrt(n - a*a - b*b - c*c);
			if(temp == (int)temp){
				cout << a << " " << b << " " << c << " " << (int)temp;
				return 0;
				}
			}
		}
	
	
	
	return 0;
}

/*
{
	int n;
	cin >> n;
	for(int a = 0 ; a <= 2237 ; a++){
		if(a*a > n) continue;
		for(int b = a ; b <= 2237 ; b++){
			if(a*a + b*b > n) break;
			for(int c = b ; c <= 2237 ; c++){
				if(a*a + b*b + c*c > n) break;
				for(int d = c ; d <= 2237 ; d++){
					if(a*a + b*b + c*c + d*d > n) break;
					if(a*a + b*b + c*c + d*d == n)
	 				{
	 					cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
						return 0; 
					}
				}
			}
		}
	}
	return 0; 
}*/
