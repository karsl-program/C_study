#include <iostream>
using namespace std;

int main()
{
	int num, k, ik=0,x;
	cin>>num>>k;
	x = num;
	while(num!=0){
		if(num%10 == 3) {
			ik++;
		}
		num/=10;
	}
	if(x%19==0&&ik == k) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	
	return 0;
}
