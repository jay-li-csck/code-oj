#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a,b,c,d;
	a = b = c = d = 0;
	string s;
	getline(cin,s);
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == 'G' || s[i] == 'g') a++;
		if(s[i] == 'P' || s[i] == 'p') b++;
		if(s[i] == 'L' || s[i] == 'l') c++;
		if(s[i] == 'T' || s[i] == 't') d++;
	}
	for( ; a > 0 || b > 0 || c > 0 || d > 0 ;)
	{
		if(a-- > 0) cout<<'G';
		if(b-- > 0) cout<<'P';
		if(c-- > 0) cout<<'L';
		if(d-- > 0) cout<<'T';
	}

	return 0;
}

