#include <iostream>
#include <string>
using namespace std; 
int main()
{
	int a,a1,x,n,m,f1 = 0,x1 = 0;
	cin>>n>>m;
	string s;
	int b[10001] = {0};
	for(int i = 0; i < m; i++){
		cin>>x;b[x]++;
	}
	for(int i = 0; i < n; i++)
	{
		cin>>s>>x;int f = 0;
		for(int j = 0; j < x; j++)
		{
			cin>>a1;
			if(b[a1] > 0){
				if(f == 0){
					f++;
					cout<<s<<":";
				}
				cout<<" "<<a1;x1++;
			}
		}
		if(f != 0){cout<<endl;	f1++;
		}
	}

	cout<<f1<<" "<<x1;
	return 0;
}
