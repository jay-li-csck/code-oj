#include <iostream>
#include <string>
using namespace std; 
int main()
{
    int m;
    cin >> m;
    while (m--) {
        int k, flag = 0;
        cin >> k;
        for (int n = 1; n < 10; n++) {
            int mul = n * k * k;
            string smul = to_string(mul), sk = to_string(k);
            string smulend = smul.substr(smul.length() - sk.length());
            if (smulend == sk) {
                printf("%d %d\n", n, mul);
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("No\n");
    }
    return 0;
}

/* 10fen
	int n,a,a1,j,j1,x1,flag = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		a1 = 0;
		int x;cin>>x;x1 = x;
		while(x1%10 != 0){
			a1 = a1*10 + x1%10;
			x1 = x1/10; 	 
		}
	for(int k = 1; k <= 9; k++){
		a = 0;x1 = x;
		j = k * x * x;
		j1 = j;
		while(x1%10 != 0){
			a = a*10 + j%10;
			x1 = x1/10; 
			j = j/10;	 
		}
	if(a == a1){
		cout<<k<<" "<<j1<<endl;flag = 1;break;
	} 
	}if(flag == 0) cout<<"No"<<endl;
	}
	return 0;
}*/
