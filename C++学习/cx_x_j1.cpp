#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if (a < 60 && a >= 0) {
		cout<<"�����"; 
	} else if (a >= 60 && a < 70) {
		cout<<"����"; 
	} else if (a >= 70 && a < 85) {
		cout<<"����";
	} else if (a >= 85 && a < 101){
		cout<<"����"; 
	} else {
		cout<<"Error";
	}
	
	return 0;
}
