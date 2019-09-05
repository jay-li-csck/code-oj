#include <iostream>
#include <set>
using namespace std;
int main()
{/*
每列从大到小排 
set 中元素为每列最小的车号 
*/ 
	set<int> s;
	s.insert(0);
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int t;
		cin >> t;
		if(t < *s.rbegin())// 最大的元素 
		{
			s.erase(*(s.upper_bound(t)));// 删除  第一个比t大的元素 
		}
		s.insert(t);
	}
	cout << s.size()-1;
	return 0;
}
