#include <iostream>
using namespace std;
 
int main()
{
	int a, x;
	cin>>a;
	if(a >= 100 or a < 0){
		cout<<"������һ��С��100������һ������0����";
	} else{
		if(a % 7 == 0) {
			x = 7;
		} else if(a % 5 == 0) {
			x = 5;
		} else if(a % 3 == 0) {
			x = 3;
		} else if(a % 2 == 0 && a != 2) {
			x = 2;
		} else {
			x = 0;
		}
		if (x) {
			cout<<"�ܱ�"<<x<<"����"; 
		} else {
			cout<<"������"; 
		}
	} 
	
	
	return 0;
}
