#include<iostream>
using namespace std;

int main() {
	
	float qian, i = 0.0, res;
	cin>>qian;
	
	if (qian>2000){
		i = 0.6;
	}
	else if (qian>=1000){
		i = 0.8;
	}
	else if (qian>=500){
		i = 0.9;
	}
	else {
		i = 1.0;
	}
	res = qian*i;
	cout<<"ÄãÒª¸¶µÄÇ®£º"<<res<<endl;
	
	return 0;
}
