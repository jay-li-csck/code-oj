#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a[10],n,j=0;
	vector<int> vec;
	for(int i = 0; i < 10 ;i++){
		cin>>n;
		while(n--){
			vec.push_back(i);
		}
	}n = vec[0];
	while( n == 0){
		n = vec[j++];
	}
	cout<<n;
	for(int i = 0; i < vec.size() ;i++){
		if(i == j-1 )continue;
		cout<<vec[i];
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
    int a[10], t;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 1; i < 10; i++) {
        if (a[i] != 0) {
            cout << i;
            t = i;
            break;
        }
    }
    for (int i = 0; i < a[0]; i++) cout << 0;
    for (int i = 0; i < a[t] - 1; i++) cout << t;
    for (int i = t + 1; i < 10; i++)
        for (int k = 0; k < a[i]; k++)
            cout << i;
    return 0;
}
*/
