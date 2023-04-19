#include <iostream>
using namespace std;

int main()
{
	int num, a, cha;
	cin>>a>>num>>cha;
	a--;
	do{
		num+=cha;
		a--;
	}while(a>0);
	cout<<num;
	return 0;
}
