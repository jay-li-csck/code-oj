#include <iostream>  
#include <string> 
using namespace std;   
int main()
{
	string s,s1;
	int n,cnt = 0;
	cin>>s>>n;
	getchar();
	while(1)
	{
		getline(cin,s1);cnt++;
		if(s1 == "#")break;
		if(cnt <= n && s1 == s)
		{
			cout<<"Welcome in";
			break;
		}
		else if(cnt <= n && s1 != s)
		{
			cout<<"Wrong password: "<<s1<<endl;
			if(cnt == n){
				cout<<"Account locked";
				break;
			}
		}
		
	}
	return 0;
}
