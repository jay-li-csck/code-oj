#include<iostream>
#include<algorithm>
#include <vector>//lh
using namespace std;
bool cmp(int a,int b){return a>b;}
int arr[10000] ;
int main()
{
    int n,flag = 0;
    cin>>n;
	vector<int> vec;
    for(int j = 0; j < n; j++){
    	int i;cin>>i;
		vec.push_back(i);
		while(i!=1){  
		    if(i%2!=0)i = (3*i+1);
			i = i/2;
			if(arr[i] == 1)break;
			arr[i] = 1;
		}
	}
    sort(vec.begin(),vec.end(),cmp);
	for(int i = 0 ;i < vec.size() ;i++){
		if(arr[vec[i]] == 0 ){
			if(flag == 1) cout<<" ";
			cout<<vec[i];flag = 1;
		}
	}	
	return 0;
}
