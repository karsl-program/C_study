#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if (a < 60 && a >= 0) {
		cout<<"待提高"; 
	} else if (a >= 60 && a < 70) {
		cout<<"及格"; 
	} else if (a >= 70 && a < 85) {
		cout<<"良好";
	} else if (a >= 85 && a < 101){
		cout<<"优秀"; 
	} else {
		cout<<"Error";
	}
	
	return 0;
}
