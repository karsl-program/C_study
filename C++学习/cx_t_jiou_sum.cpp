#include <iostream>
using namespace std;

int main()
{
	int num, sum_o=0, sum_j=0, i=1;
	cin>>num;
	while (i<=num) {
		if(i%2==0){
			sum_o+=i;
		} else {
			sum_j+=i;
		}
		i++;
	}
	cout<<"Å¼Êý£º"<<sum_o<<" "<<"ÆæÊý£º"<<sum_j;
	
	return 0;
}

