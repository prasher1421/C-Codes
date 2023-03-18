#include<bits/stdc++.h>

using namespace std;


int main()
{   
    int n,burstTime[20],waitingTime[20],turnAroundTime[20],averageWaitingTime=0,averageTurnAroundtime=0,i,j;
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n;
 
    cout<<"\nEnter Process Burst Time / Execution Time \n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>burstTime[i];
    }
    
    

    waitingTime[0]=0;    
    //because waiting time for first process is 0    

    //calculating waiting time
    for(i=1;i<n;i++)
    {
        waitingTime[i]=0;
        for(j=0;j<i;j++)
            waitingTime[i]+=burstTime[j];
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    
    
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        turnAroundTime[i]=burstTime[i]+waitingTime[i];
        averageWaitingTime+=waitingTime[i];
        averageTurnAroundtime+=turnAroundTime[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<burstTime[i]<<"\t\t"<<waitingTime[i]<<"\t\t"<<turnAroundTime[i];
    }
    
    averageWaitingTime/=i;
    averageTurnAroundtime/=i;

    cout<<"\n\nAverage Waiting Time:"<<averageWaitingTime;
    cout<<"\nAverage Turnaround Time:"<<averageTurnAroundtime;

    return 0;
}