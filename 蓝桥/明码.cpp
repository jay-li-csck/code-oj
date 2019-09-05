#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        bitset<8> t(n);//创建对象的时候可以直接传进去一个数
        cout<<t.to_string();
        t = m;//也可以直接赋值
        cout<<t.to_string()<<endl;
    }
}
