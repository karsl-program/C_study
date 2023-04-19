#include<iostream>
using namespace std;
int a, b;
int main()
{
	cin>>a>>b;
	a += b;
	b -= 1;
	cout<<a<<" "<<b<<endl;
	a /= 2;
	b *= b;
	cout<<a<<" "<<b<<endl;
	a %= b;
	a %= 10;
	cout<<a<<" "<<b<<endl;
	return 0;
}
