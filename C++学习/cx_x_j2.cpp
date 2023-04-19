#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if (a >= 100 && a < 1000) {
		if((a / 100) == (a % 10)) {
			cout<<"这个数是回文数";
		}
		else {
			cout<<"这个不是回文数";
		}
	} else {
		cout<<"请输入一个三位数"; 
	}
	
	return 0;
}
