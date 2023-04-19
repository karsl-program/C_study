#include <iostream>
using namespace std;

int main()
{
	long long x;
	cout<<"请输入阶级：";
	cin>>x;
	cout<<"正方形---"<<endl; 
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"三角形---"<<endl;
	for(int i=x;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<x-i+1<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"倒序三角形---"<<endl;
	for(int i=x;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
