#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> v(n);
	vector<int> v1(n);
	for(int i = 0 ; i < n ; i++)
		cin >> v[i] ;	
	for(int i = 0 ; i < n ; i++)
		cin >> v1[i] ;
	int f = 0;
    for(int i = n - 1 ; i > 0 ; i--){
    	if(v1[i] == v[i]) continue;
    	else{
    		if(v1[i] < v1[i-1]){
    			f = 1;
    			break;
			}
		}
	}
	if(f){
		//for(int i = 0 ; i < n ; i++)
	}else{
		cout << "Insertion Sort" << endl;
		int x,cnt = 0;
		for(int i = 0 ; i < n ; i++)
			if(v1[i+1] < v1[i]){
				x = i+1;break;
			} 
		for(int i = 0 ; i < n ; i++)
		{	
			if(v1[i] < v1[x]){
				v[i] = v1[i];cnt++;
			}	
			else {
				v[i] = v1[x];cout<<v[i];break;
			}
		}
		for(int i = 0 ; i < n ; i++)
			cout << " " << v[i];
    
	}
   
	

    return 0;
}
