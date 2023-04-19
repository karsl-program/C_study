#include <iostream>
using namespace std;

int main()
{
	float num;
	do {
		cin>>num;
		if(num<0||num>100) {
			cout<<"输入有误，请重新输入。";
			continue;
		}
	}while(1);
}
