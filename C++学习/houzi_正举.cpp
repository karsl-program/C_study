#include <iostream>
using namespace std;

int main()
{
	int num=10, tmp;
	for(;;num++) {
		tmp=num;
		for(int i=1; i<=10; i++) {
			tmp/=2;
			tmp--;
		}
		if(tmp==1) break;
	}
	cout<<num;
}
