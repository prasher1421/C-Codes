#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,3,6,2,7,4,8,3,8,10,11,9,11,9,5,0};

    int target;
    cout<<"Enter The Target : ";
    cin>>target;

    cout<<"Indices of numbers that add upto target are \n";

    for(int i = 0 ; i< nums.size(); i++ ){

        int num = nums[i], num2 = target - num;
        if(nums[i]<=target){

            auto index2 = find(nums.begin() + i, nums.end() , num2);

            if(index2 - nums.begin() != -1  &&  index2 != nums.end()){
                cout<<i<<" "<<index2 - nums.begin() <<"\n";
            }
        }
    }

    return 0;
}