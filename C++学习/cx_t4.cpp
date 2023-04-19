#include<iostream>
using namespace std;

int main()
{
	int x;
	float a = 15.75;
	double b = 323.01;
	cout<<(int)a<<endl;
	cout<<(int)(b + 0.5) % 10<<endl;
	cout<<(int)b % (int)a + 1<<endl;
	return 0;
}
