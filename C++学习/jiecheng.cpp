#include <iostream>
using namespace std;

int main() {
    int n;
    long long f = 1, sum = 0;
    cout << "������һ��������";
    cin >> n;    
    for (int i = 1; i <= n; i++) {
        f *= i;
        sum += f;
    }
    cout << "1��" << n << "�����н׳�֮��Ϊ��" << sum << endl;
    return 0;
}

