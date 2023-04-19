#include <iostream>
using namespace std;

int main()
{
	int x, min=0;
	cin>>x;
	while(x>0) {
		x-=3;
		min++;
		if(x<=0) {
			break;
		} else {
			x+=1;
			min++;
		}
	}
	cout<<min;
	
	return 0;
}
