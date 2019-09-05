#include <iostream>  
#include <algorithm> 
#include <vector> 
using namespace std;   
int main()
{
	int n,result = 0,temp = 0;long long p;
	cin>>n>>p;
	vector<int> v(n);
	for(int i = 0 ; i < n ;i++){
		int j ;
		cin>>j;v[i] = j;
	}
	sort(v.begin(),v.end());
	for(int i = 0 ; i < n ;i++){
		for(int j = i + result ; j < n ;j++)
		{
			if(v[j] <= v[i] * p){
				temp = j - i + 1;
				if(temp > result)
					result = temp;
			}
			else{
				break;
			}
		}
		
	}
	cout<<result;
	
	return 0;	
}
