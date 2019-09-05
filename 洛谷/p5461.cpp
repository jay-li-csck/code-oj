#include <iostream> 
#include <string.h> 
using namespace std;
int a[1025][1025] ;
int cn = 1;
void print(){
	for(int i = 0; i < cn; i++){
		int f = 1;
			for(int j = 0; j < cn; j++){
				if(f == 0) cout << " ";
				cout << a[i][j];
				f = 0;
			}
		cout << endl;
	}
}		
int f(int x,int y,int z) {
	int b = z/2;
	if(z == 0) return 0;
	
	for(int i = x; i < x+b; i++) {
		for(int j = y; j < y+b; j++) {
			a[i][j] = 0;
		}
	}
	
	f(x+b,y,z/2);
	f(x,y+b,z/2);
	f(x+b,y+b,z/2);
}
int main()
{
	int n;
	cin >> n;
	cn = 2<<n-1;
	for(int i = 0; i < cn; i++) {
		for(int j = 0; j < cn; j++) {
			a[i][j] = 1;
		}
	}
	
	f(0,0,cn);
	print();
	return 0;
} 
