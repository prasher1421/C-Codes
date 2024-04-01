#include<bits/stdc++.h>
#include<ctime>

#define ll long long int
using namespace std;

void transmission(ll & i, ll & windowSize, ll & totalFramesTobeSent, ll & tt) {
    while (i <= totalFramesTobeSent) {
        int z = 0;
        for (int k = i; k < i + windowSize && k <= totalFramesTobeSent; k++) {
            cout << "Sending Frame " << k << "..." << endl;
            tt++;
        }
        for (int k = i; k < i + windowSize && k <= totalFramesTobeSent; k++) {
            int f = rand() % 2;
            if (!f) {
                cout << "Acknowledgment for Frame " << k << "..." << endl;
                z++;
            } else {
                cout << "Timeout!! Frame Number : " << k << " Not Received" << endl;
                cout << "Retransmitting Window..." << endl;
                break;
            }
        }
        cout << "\n";
        i = i + z;
    }
}

int main() {
    ll totalFramesTobeSent, windowSize, tt = 0;
    srand(time(NULL));
    cout << "Enter the Total number of frames : ";
    cin >> totalFramesTobeSent;
    cout << "Enter the Window Size : ";
    cin >> windowSize;
    ll i = 1;
    transmission(i, windowSize, totalFramesTobeSent, tt);
    cout << "Total number of frames which were sent and resent are : " << tt <<
        endl;
    return 0;
}