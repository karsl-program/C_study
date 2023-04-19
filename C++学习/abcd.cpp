#include <iostream>
using namespace std;

int main()
{
	int x=1, y=1, num, n, m, cnt=0;
	cin>>n>>m>>num;
	while(x<=num&&y<=num) {
		if(x==y) cnt++;
		x=cnt%n+1; y=cnt%m+1;
		x++; y++;
	}
	return 0;
}
