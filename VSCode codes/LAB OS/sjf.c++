#include <iostream>
using namespace std;

int main()
{
	int A[100][4]; 
    // Matrix for storing Process Id, Burst
	// Time, Average Waiting Time & Average
	// Turn Around Time.
	
	int i, j, n, total = 0, index, temp;
	float avgWaitingTime, avgTurnAroundTime;
	cout << "Enter number of process: ";
	cin >> n;
	cout << "Enter Burst Time:\n";


	// User Input Burst Time and alloting Process Id.
	for (i = 0; i < n; i++) {
		cout << "P" << i + 1 << ": ";
		cin >> A[i][1];
		A[i][0] = i + 1;
	}


	// Sorting according to their Burst Time.
	for (i = 0; i < n; i++) {
		index = i;
		for (j = i + 1; j < n; j++)
			if (A[j][1] < A[index][1])
				index = j;
		temp = A[i][1];
		A[i][1] = A[index][1];
		A[index][1] = temp;

		temp = A[i][0];
		A[i][0] = A[index][0];
		A[index][0] = temp;
	}
	
	// First waiting time is 0 seconds
	A[0][2] = 0;


	// Calculation of Waiting Times
	for (i = 1; i < n; i++) {
		A[i][2] = 0;
		for (j = 0; j < i; j++)
			A[i][2] += A[j][1];
		total += A[i][2];
	}
	avgWaitingTime = (float)total / n;
	total = 0;
	cout << "P	 BT	 WT	 TAT\n";

	// Calculation of Turn Around Time and printing the data.
	for (i = 0; i < n; i++) {
		A[i][3] = A[i][1] + A[i][2];
		total += A[i][3];
		cout << "P" << A[i][0] << "	 " << A[i][1] << "	 " << A[i][2] << "	 " << A[i][3] << endl;
	}
	avgTurnAroundTime = (float)total / n;
	cout << "Average Waiting Time= " << avgWaitingTime;
	cout << "\nAverage Turnaround Time= " << avgTurnAroundTime;
}