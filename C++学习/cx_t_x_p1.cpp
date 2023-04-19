#include <iostream>
using namespace std;

int main()
{
	int m, s, h, res, res2;
	cin>>m>>s>>h;
	res = s * 6;
	res2 = h / 3;
	res2 *= 9;
	res = res2 - res;
	if(res >= m) {
		cout<<"可以";
	} else {
		cout<<"不可以"; 
	}
	
	return 0;
}
