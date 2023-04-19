#include <iostream>
using namespace std;

int sanjiao(int a, int b, int c)
{
	bool bl;
	bl=(a+b)>c&&(a+c)>b&&(b+c)>a?1:0;
	
	return bl;
}

int main()
{
	int a, b, c; bool x;
	cin>>a>>b>>c;
	x = sanjiao(a, b, c);
	cout<<x;
}

