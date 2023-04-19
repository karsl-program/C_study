#include<iostream>
using namespace std;

int main()
{
	int i, n, j;
	cin>>i>>n;
	while (n != 0){
		j = i++;
		cout<<"j="<<j<<" "<<"i="<<i<<endl;
		n--;
	}
	cout<<i + j<<endl;
}
