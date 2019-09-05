#include <iostream>
#include <stack> 
//说反话 栈  先进后出 
using namespace std;
int main()
{
	int flag = 0;
	stack<string> s;
	string st;
	while(cin>>st)
	{
		s.push(st);
	}
	while(!s.empty()){
		if(flag == 1)
		cout<<" ";
		cout<<s.top();
		s.pop();	
		flag = 1;
	}
}
