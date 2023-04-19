 #include <iostream>
 using namespace std;
 
 int main()
 {
     int n, m;
     cin >> n >> m;
 
     if (n % m != 0)
     {
         cout << "impossible" << endl;
         return 0;
     }
 
     int moves = n / 2;
     if (n % 2 == 1)
     {
         moves++;
     }
     if (moves % m != 0)
     {
         moves = (moves / m + 1) * m;
     }
     cout << moves << endl;
 
     return 0;
 }