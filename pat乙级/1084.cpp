#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,j;
	string a;
	cin >> a >> n;
	for(int cnt = 1 ; cnt < n ; cnt++){
		string t;
		for(int i = 0 ; i < a.length() ; i = j)
		{
			for( j = i ; j < a.length() && a[j] == a[i] ; j++);
				t += to_string((a[i] - '0') * 10 + j - i);			
		}
		a = t;	
	}
	cout << a;
	return 0;
}
