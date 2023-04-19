#include <iostream>
using namespace std;

int main()
{
	float sum, f, num;
	int h=0;
	cin>>sum>>f;
	if(sum<=f){
		cout<<0;
		return 0;
	}
	while(1){	
		num=sum;
		for(int i=0;i<h;i++){
			num-=num/3;
			num-=2;
			if(num-num/3-2<=f) {
				cout<<h;
				return 0;
			}
		}
		h++;
	}
	
	return 0;
}
