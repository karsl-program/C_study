#include <iostream>
using namespace std;

bool pai(int a) {
	bool n=false;
	while (a%10==0) {
		if(a%10==7){
			n=true;
			break;
		}
		a/=10;
	}
	if(a%10==7) {
		n=true;
	}
	return n;
}
int main()
{
	int num;
	bool k;
	cin>>num;
	for (int i=1; i<=num; i++) {
		k=pai(i);
		if(k) cout<<"ед"<<" ";
		else cout<<i<<" ";
	}
	
	return 0;
}

