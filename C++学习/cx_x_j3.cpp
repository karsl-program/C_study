#include <iostream>
using namespace std;
 
int main()
{
	int n, a, b;
	cin>>n;
	a = n / 10;
	b = n % 10;
	if (a > b && a % 2 == 0 && b % 2 == 0) {
		cout<<"��˫��";
	} else if (a > b){
		cout<<"����";
	} else {
		cout<<"���Ǵ���";
	}
	
	return 0;
}
