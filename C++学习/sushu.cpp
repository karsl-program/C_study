#include <iostream>
using namespace std;

bool zhi(int x) {
	for (int a=2; a<x/2; a++) {
		if(x%a==0){
			return false;
		}
	}
	if(x<=0||x==1) return false;
	
	return true;
}

int main(){
	int n, k;
	cin>>n>>k;
	for (int i=n; i<=k; i++) {
		if(zhi(i)) cout<<i<<" ";
	}
	
	return 0;
}
