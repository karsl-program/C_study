#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if (a >= 100 && a < 1000) {
		if((a / 100) == (a % 10)) {
			cout<<"������ǻ�����";
		}
		else {
			cout<<"������ǻ�����";
		}
	} else {
		cout<<"������һ����λ��"; 
	}
	
	return 0;
}
