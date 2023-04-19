#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <ctime>
#define n(x) rand()%(x)
using namespace std;
int main()
{
	int x,y,num=0;
	srand((int)time(0));
	Sleep(5000);
	while(1)
	{
		if(GetAsyncKeyState(0x1B) == 0)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(5);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			num++;
			cout<<num<<endl;
		}	
		else{
			return 0;
		}
	}
}
