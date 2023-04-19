#include <iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	for (int n=1; n<=i; n++){
		for (int j=1; j<=n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}

