#include <iostream>
using namespace std; 
int main()
{
	int n,d,x,cnt = 0,kc = 0,cz = 0;
	double e,e1;
	cin>>n>>e>>d;
	for(int i = 0; i < n; i++){
		cin>>x;cnt = 0;
		for(int j = 0; j < x; j++){
			cin>>e1;
			if(e1 < e)cnt++;
		}
		if(cnt > (x/2)){
			if(x > d)cz++;
			else kc++;	
		}
		
	}
	double ksd = (double)kc/n*100;
	double kcz = (double)cz/n*100;
	printf("%0.1f%% %0.1f%%",ksd,kcz);

	return 0;
}
