 #include <iostream>
 using namespace std;
 
 void bs(int arr[], int n) {
     for (int i = 0; i < n-1; i++) {
         for (int j = 0; j < n-i-1; j++) {
             if (arr[j] < arr[j+1]) {
                 int temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
             }
         }
     }
 }
 
 int main() {
     int n;
     cin >> n;
 
     int prices[n];
     for (int i = 0; i < n; i++) {
         cin >> prices[i];
     }
 
     bs(prices, n);
     int total = prices[0] + prices[1] + prices[2];
     cout << total << endl;
 
     return 0;
 }
