#include <iostream>
using namespace std;
const long long N=2.5E4;

int main()
{
	long long num[N], sum=0, i=0, n=0, f, l;
	cout<<"请输入最大值与最小值<最大值 最小值>：";
	cin>>f>>l;
	for (;;){
		cout<<"请输入成绩：";
		cin>>num[i];
		if(num[i]==-1) {
			break;
		} else if(num[i]<l||num[i]>f) {
			cout<<"输入有误，请重新输入。";
			continue;
		} else {
			sum+=num[i];
			i++;
		}
	}
	num[i]=0;
	cout<<"输入完成，总分是"<<sum<<endl<<"平均分是"<<sum*1.0/i<<endl;
	while(n!=-1){
		cout<<"\n你要查询：";
		cin>>n;
		cout<<num[n-1]<<endl;
	}
	cout<<"程序结束";
	
	return 0; 
}
