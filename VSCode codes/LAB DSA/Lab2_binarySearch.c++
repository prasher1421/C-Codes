#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int binarySearch(int arr[],int size, int key){
    int s = 0; 
    int e = size-1;
    int mid = s+(e-s)/2; //for high int ranges

    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid = s+(e-s)/2; //for high int ranges
    }
    return -1;
}

int main()
{
    int even[10]={1,2,3,4,5,6,7,8,9,10};

    int element;
    cout<<"Enter element to be found : \n";
    cin>>element;

    int size = sizeof(even)/sizeof(*even);
    int a = binarySearch(even,size,element);
    
    if(a==-1)
    {
        cout<<"Not Found ";
        cout<<"\n --Enter a position to add element--";
        int pos;
        
        cin>>pos;
        if(pos > sizeof(even)/sizeof(int) ){
            cout<<"\n--Element will be inserted at last--";
        }

        cout<<"\nNew Array ->> ";

            for (int i = 0; i < sizeof(even)/sizeof(int) ; i++)
            {
                if(pos> sizeof(even)/sizeof(int) -1){
                    cout<<even[i]<<" ";

                    if( i == sizeof(even)/sizeof(int) - 1 ){
                    cout<< element <<" ";
                    }
                
                }
                else{
                    if( i == pos ){
                    cout<< element <<" ";
                    }
                    cout<<even[i]<<" ";
                    
                }
            }   
    }
    else{
        cout<<"Found at : "<<a<<"\n --Element was deleted--\nNew Array ->> ";

            for (int i = 0; i < sizeof(even)/sizeof(int) ; i++)
            {
                if(i==a){
                    continue;
                }
                cout<<even[i]<<" ";
            }
    }
    return 0;
}