 #include <iostream>
 using namespace std;
 int main()
 {
     int n, m;
     cin >> n;
     cin >> m;
     if (n < m)
     {
         cout << "Immpossible";
     }
     if ((n + 1) / 2 <= m)
     {
         cout << m;
     }
     else
     {
         int ans = m;
         do
         {
             ans = ans + m;
         } while ((n + 1) / 2 <= ans);
         cout
             << ans;
     }
 }