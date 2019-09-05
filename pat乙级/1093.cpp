#include <iostream>
#include <string>
#include <cctype>
using namespace std; 
int main()
{
	string s,s1,s2;
	int a[255] = {0};
	int flag = 1;
	getline(cin,s1);
	getline(cin,s2);
	s = s1 + s2;
    for (int i = 0; i < s.size(); i++) {
        if (a[s[i]] == 0) cout << s[i];
        a[s[i]] = 1;
    }
	return 0;
}
