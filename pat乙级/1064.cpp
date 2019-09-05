#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	int a[10000] = {0};
	int n,f = 0;
	vector<int> vec;
	cin>>n;
	for(int i = 0; i< n; i++){
		int x,cnt = 0;
		cin>>x;
		while(x%10 != 0){
			cnt += x%10;
			x = x/10;
		}
		if(a[cnt] == 0){
			vec.push_back(cnt);
		}
		a[cnt]++;
	}
	cout<<vec.size()<<endl;
	sort(vec.begin(),vec.end());
	for(int i = 0; i < vec.size(); i++){
		if(f == 1)cout<<" ";
		cout<<vec[i];
		f = 1;
	}
	return 0;
	
	
}

