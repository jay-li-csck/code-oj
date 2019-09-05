#include <iostream>  
using namespace std;   
int main()
{
	int n,row = 0;
    char c;
    cin>>n>>c;
    for (int i = 0; i < n; i++) {
        if ((2 * i * (i + 2) + 1) > n) {
            row = i - 1;
            break;
        }
    }
	for(int i = row ; i > 0 ; i--){
		for(int j = row - i ; j > 0 ; j--)cout<<" ";
		for(int k = 2*i + 1 ; k > 0 ; k--)cout<<c;
		cout<<endl;
	}
	for(int j = row ; j > 0 ; j--)cout<<" ";cout<<c<<endl;
	
	for(int i = 1 ; i <= row ; i++){
		for(int j = row - i ; j > 0 ; j--)cout<<" ";
		for(int k = 2*i + 1 ; k > 0 ; k--)cout<<c;
		cout<<endl;
	} 
	cout<<n - (2 * row * (row + 2) + 1);
	return 0;
}
