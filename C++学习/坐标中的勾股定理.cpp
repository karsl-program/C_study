#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<sqrt(pow(abs((x1-x2)), 2.0) + pow(abs(y1-y2), 2.0))<<endl;
	
	return 0;
}
