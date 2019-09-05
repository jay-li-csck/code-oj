#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a[100001] = {0};
	int b[100001] = {0};
	int n;
	vector<int> v;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int cnt = 1;
		int x,y;
		cin >> x >> y;
		a[x] = y; a[y] = x;
	}
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int x;		
		cin >> x;
		b[x] = 1 ; 
	}
	int cnt = 0;
	for(int i = 0 ; i < 100001; i++)
	{	
		if(b[i] == 1){
			if(b[a[i]] != 1){
				cnt++;
				v.push_back(i);
			} 
		}
	}
	cout <<cnt << endl;
	int f = 1;
	for(int i = 0 ; i < v.size() ; i++){
		if(f != 1)cout<<" ";
	printf("%05d", v[i]);f = 0;
	}
	return 0;
}
