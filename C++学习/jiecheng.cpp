#include <iostream>
using namespace std;

int main() {
    int n;
    long long f = 1, sum = 0;
    cout << "请输入一个整数：";
    cin >> n;    
    for (int i = 1; i <= n; i++) {
        f *= i;
        sum += f;
    }
    cout << "1到" << n << "的所有阶乘之和为：" << sum << endl;
    return 0;
}

