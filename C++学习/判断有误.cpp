#include <iostream>
using namespace std;

int main()
{
	float num;
	do {
		cin>>num;
		if(num<0||num>100) {
			cout<<"�����������������롣";
			continue;
		}
	}while(1);
}
