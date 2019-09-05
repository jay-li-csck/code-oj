#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int m,n,s,f = 0 ;
    scanf("%d%d%d",&m,&n,&s);
	string str;
	map<string,int> mapp;
	for(int i = 1; i <= m; i++){
		cin>>str;
		if(mapp[str] == 1) s = s + 1;
		if(i == s && mapp[str] == 0) {
			mapp[str] = 1;
			cout<<str<<endl;
			f = 1;
			s = s + n;
		}
	}
	
	if(f == 0)cout<<"Keep going...";
	return 0;
}
