#include <iostream>
using namespace std;

int gysnum(int a, int b)
{
	int min, max;
	min = a>b ? b : a; max = a>b ? a : b;
	int yu = min, chu;
	while (yu != 0) {
		chu = yu;
		yu = max % yu;
	}
	
	return chu;
}
int main()
{
	int a, b;
	cin>>a>>b;
	cout<<gysnum(a, b);
	
	return 0;
}
