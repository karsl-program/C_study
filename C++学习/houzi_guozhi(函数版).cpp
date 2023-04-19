#include <iostream>
using namespace std;

float guozhi(float x, float y)
{
	float h=0;
	do {
		x-=x/3;
		x-=2;
		if (x<=y){
			break;
		}
		h++;
	}while(1);
	
	return h;
}
int main(){
	float sum, f;
	cin>>sum>>f;
	cout<<guozhi(sum, f);
	return 0;
}
