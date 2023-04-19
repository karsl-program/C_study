#include <iostream>
using namespace std;

int main()
{
	int x, s=0;
	cin>>x;
	do {
		s=s+x%4;
		x/=4;
	}while(x!=0);
	cout<<"s="<<s;
}
