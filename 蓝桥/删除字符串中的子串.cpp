#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	int pos;
	getline(cin,s1);
	getline(cin,s2);
	// 查找位置                  合法 
	while((pos = s1.find(s2)) != string::npos )
		s1.replace(pos,s2.length(),""); // 替换 
	cout << s1;
	return 0;
	
	
	
}
