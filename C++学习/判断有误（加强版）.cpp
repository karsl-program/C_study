#include <iostream>
using namespace std;
const long long N=2.5E4;

int main()
{
	long long num[N], sum=0, i=0, n=0, f, l;
	cout<<"���������ֵ����Сֵ<���ֵ ��Сֵ>��";
	cin>>f>>l;
	for (;;){
		cout<<"������ɼ���";
		cin>>num[i];
		if(num[i]==-1) {
			break;
		} else if(num[i]<l||num[i]>f) {
			cout<<"�����������������롣";
			continue;
		} else {
			sum+=num[i];
			i++;
		}
	}
	num[i]=0;
	cout<<"������ɣ��ܷ���"<<sum<<endl<<"ƽ������"<<sum*1.0/i<<endl;
	while(n!=-1){
		cout<<"\n��Ҫ��ѯ��";
		cin>>n;
		cout<<num[n-1]<<endl;
	}
	cout<<"�������";
	
	return 0; 
}
