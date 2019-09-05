#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sb[256] = {0};
	string a,b;
	int f = 0;
	getline(cin,a);
	getline(cin,b);
	for(int i = 0 ; i < b.length() ; i++)
	{
		sb[b[i]] = 1;
	}
	for(int i = 0 ; i < a.length() ; i++)
	{
		if(sb[a[i]]  == 1) continue;
        cout << a[i];
	}
	return 0;
}
