#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b, c;
	float s;
	a = 14, b = 3, c = 5;
	cout<<a%b*c<<endl;
	cout<<b*a%c<<endl;
	cout<<b*(a%c)<<endl;
	return 0;
}
