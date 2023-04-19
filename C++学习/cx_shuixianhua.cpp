#include <iostream>
using namespace std;

int main() {
   int num;
   cin>>num;
   for (int i = 100; i <= num; i++) {
      int t = i;
      int sum = 0;
      while (t > 0) {
         int d = t % 10;
         sum += d * d * d;
         t /= 10;
      }
      if (sum == i) {
         cout << i << " ";
      }
   }
   return 0;
}

