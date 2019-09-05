#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string c,a;
	cin >> n >> c;
	getchar();
	getline(cin,a);
	if(a.length() < n){
		int x = n - a.length();
		for(int i = 0 ; i < x ; i++) cout << c;
		cout << a;
	}
	else{
		for(int i = a.length()-n  ; i <= a.length(); i++)
		cout<<a[i];
	}
	return 0;
}
