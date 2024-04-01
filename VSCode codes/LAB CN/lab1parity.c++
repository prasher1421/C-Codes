#include <bits/stdc++.h>
using namespace std;
void findParity(int n) {
   int b;
   b = n ^ (n >> 1);
   b = b ^ (b >> 2);
   b = b ^ (b >> 4);
   b = b ^ (b >> 8);
   b = b ^ (b >> 16);
//    b = b ^ (b >> 32);
   if ((b & 1) == 0) {
      cout << "Even Parity" << endl;
   }
   else {
      cout << "Odd Parity" << endl;
   }
}
int main() {
   int n = 15;
   findParity(n);
   return 0;
}