#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int n = a + b;
	stack<int> s;
	if(n == 0){
		cout<<0;
	}
	else{	
	while(n != 0){
		s.push(n%c);
		n = n/c;
	}
	while(!s.empty()){	
		cout<<s.top();
		s.pop();	
	}
	}
	return 0;
	
}
