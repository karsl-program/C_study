#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if (a>0) {
		cout<<a;
	} else if (a<0) {
		cout<<0-a;
	} else if (a==0) {
		cout<<0;
	}
	return 0;
	
}
