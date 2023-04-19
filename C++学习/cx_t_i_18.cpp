#include <iostream>
using namespace std;

int main() {
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=i;
		while(k%10!=0){
			sum+=k%10;
			k/=10;
		}
		if(sum==18) cout<<i<<" ";
	}
}
