#include<bits/stdc++.h>

using namespace std;


void findWaitingTime(int processes[], int n,
			int burstTime[], int waitingTime[], int quantum)
{
	
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = burstTime[i];

	int t = 0; 

	while (1)
	{
		bool done = true;

		// Traverse all processes one by one repeatedly
		for (int i = 0 ; i < n; i++)
		{
			// If burst time of a process is greater than 0 then only need to process further
			if (rem_bt[i] > 0)
			{
				done = false; // There is a pending process

				if (rem_bt[i] > quantum)
				{
					// Increase the value of t i.e. shows how much time a process has been processed
					t += quantum;

					// Decrease the burst_time of current process by quantum
					rem_bt[i] -= quantum;
				}


				else
				{
					// Increase the value of t i.e. shows how much time a process has been processed
					t = t + rem_bt[i];

					// Waiting time is current time minus time used by this process
					waitingTime[i] = t - burstTime[i];

					// As the process gets fully executed make its remaining burst time = 0
					rem_bt[i] = 0;
				}
			}
		}

		// If all processes are done
		if (done == true)
		break;
	}
}

// Function to calculate turn around time
void findTurnAroundTime(int processes[], int n,
						int burstTime[], int waitingTime[], int turnAroundTime[])
{
	// calculating turnaround time by adding
	// burstTime[i] + waitingTime[i]
	for (int i = 0; i < n ; i++)
		turnAroundTime[i] = burstTime[i] + waitingTime[i];
}

// Function to calculate average time
void findavgTime(int processes[], int n, int burstTime[],
									int quantum)
{
	int waitingTime[n], turnAroundTime[n], totalWaitingTime = 0, totalTurnaroundTime = 0;

	// Function to find waiting time of all processes
	findWaitingTime(processes, n, burstTime, waitingTime, quantum);

	// Function to find turn around time for all processes
	findTurnAroundTime(processes, n, burstTime, waitingTime, turnAroundTime);

	// Display processes along with all details
	cout << "PN\t "<< " \tBT "
		<< " WT " << " \tTAT\n";

	// Calculate total waiting time and total turn around time
	for (int i=0; i<n; i++)
	{
		totalWaitingTime = totalWaitingTime + waitingTime[i];
		totalTurnaroundTime = totalTurnaroundTime + turnAroundTime[i];
		cout << " " << i+1 << "\t\t" << burstTime[i] <<"\t "
			<< waitingTime[i] <<"\t\t " << turnAroundTime[i] <<endl;
	}

	cout << "Average waiting time = "
		<< (float)totalWaitingTime / (float)n;
	cout << "\nAverage turn around time = "
		<< (float)totalTurnaroundTime / (float)n;
}


int main()
{
	// process id's
	int processes[] = { 1, 2, 3};
	int n = sizeof processes / sizeof processes[0];

	// Burst time of all processes
	int burst_time[] = {10, 5, 8};

	
	int quantum = 2;
	findavgTime(processes, n, burst_time, quantum);
	return 0;
}