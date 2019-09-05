#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int sum,sp,st;
	sum = sp = st = 0;
	for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T')
            st++;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'P') sp++;
        if (s[i] == 'T') st--;
        if (s[i] == 'A') sum = (sum + (sp * st) % 1000000007) % 1000000007;
    }
	cout << sum;
	return 0;
}
