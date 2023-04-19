#include <iostream>
using namespace std;

int main() {
//	char ch, res;
//	ch = getchar();
//	res = (ch >= 65&&ch <= 90) ? (ch + 32) : ch;
//	cout<<res;
	int a, b, c, max, zhong, min;
	cin>>a>>b>>c;
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	zhong = a>b?(a<c?a:(b>c?b:c)):(a>c?a:(b>c?c:b));
	min = a < b ? (a < c ? a : c) : (b < c ? b : c);
	cout<<min<<" "<<zhong<<" "<<max;
}
