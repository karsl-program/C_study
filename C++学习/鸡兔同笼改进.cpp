#include<iostream>
using namespace std;

int main()
{
	int h, f;
	float j, t;
	cin>>h>>f;
	j = (4 * h - f) / 2;
	t = h - j;
	if (f % 2 != 0 or (int)j + (int)t != h or j < 0 or t < 0 or j - (int)j != 0 or t - (int)t != 0){
		cout<<"Error:����";
	}
	else{
		cout<<"����������"<<j<<endl<<"�õ�������"<<t<<endl; 
	}
	
	return 0;
}
