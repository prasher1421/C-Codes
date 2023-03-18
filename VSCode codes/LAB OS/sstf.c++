#include <bits/stdc++.h>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

int main()
{
    int Queue[100],i,size,TotalSeekDistance=0,head,count=0;

    // The number of requests
    cout<<"Enter the size of Queue : ";
    cin>>size;

    //Enter the requests sequence
    cout<<"Enter the requests of Queue : ";
    for(i=0;i<size;i++){
        cin>>Queue[i];
    }

    //Enter the head position
    cout<<"Enter the head position : ";
    cin>>head;
    
    cout<<head;
    while(count!=size)
    {
        int min=1000,diff,index;
        for(i=0;i<size;i++)
        {
           diff=abs(Queue[i]-head);
           if(min>diff)
           {
               min=diff;
               index=i;
           }
           
        }
        cout<<" ---> "<<Queue[index];
        TotalSeekDistance=TotalSeekDistance+min;
        head=Queue[index];
        Queue[index]=1000;
        count++;
    }
    cout<<"\nTotal seek distance is : "<<TotalSeekDistance;
}