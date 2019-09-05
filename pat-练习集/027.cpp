#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	string s;
	int a[10] = {0};
	int f = 0 ;
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++)
	{
		a[s[i]-'0'] = 1;
	}
	cout << "int[] arr = new int[]{";
	for(int i = 9 ; i >= 0 ; i--)
	{
		if(a[i] == 1){
			if(f == 1)cout << ",";
			cout << i;
			v.push_back(i);
			f = 1;
		} 
	}
	cout << "};" << endl;
	cout << "int[] index = new int[]{";
	f = 0; 
	for(int i = 0 ; i < s.length() ; i++)
	{
		int k = s[i]-'0';
		for(int j = 0 ; j < v.size() ; j++)
		{
			if(k == v[j]){
				if(f == 1) cout << ",";
				cout << j;
				f = 1;
			}
		}
	}
	cout << "};";
	return 0;
}
