#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<int> s;
	for(int i = 1;i <= n;i++){
		int x = i/2 + i/3 +i/5;
		s.insert(x);
	}
	cout<<s.size();
	return 0;
} 
