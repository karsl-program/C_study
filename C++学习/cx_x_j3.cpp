#include <iostream>
using namespace std;
 
int main()
{
	int n, a, b;
	cin>>n;
	a = n / 10;
	b = n % 10;
	if (a > b && a % 2 == 0 && b % 2 == 0) {
		cout<<"大双数";
	} else if (a > b){
		cout<<"大数";
	} else {
		cout<<"不是大数";
	}
	
	return 0;
}
