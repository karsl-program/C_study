#include <iostream>
using namespace std;

int pai(int a)
{
	bool p;
	p = (p % 7 == 0 or p % 10 == 7 or p / 10 == 7) ? 1 : 0;
	
	return p;
}

int main()
{
	int a; bool p;
	cin>>a;
	p = pai(a);
	cout<<p;
	
	return 0;
}
