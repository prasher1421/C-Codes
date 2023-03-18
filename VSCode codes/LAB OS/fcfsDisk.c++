#include <bits/stdc++.h>

using namespace std;

int size = 8;

void FCFS(int arr[], int head)
{
	int seekCount = 0;
	int distance, currentTrack;

	for (int i = 0; i < size; i++) {
		currentTrack = arr[i];

		// calculate absolute distance
		distance = abs(currentTrack - head);

		seekCount += distance;

		head = currentTrack;
	}

	cout << "Total number of seek operations = "<< seekCount << endl;
}

int main()
{
	
	int arr[size] = { 176, 79, 34, 60, 92, 11, 41, 114 };
	int head = 50;

	FCFS(arr, head);

	return 0;
}
