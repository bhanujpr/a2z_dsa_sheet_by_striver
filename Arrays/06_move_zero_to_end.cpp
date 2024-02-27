// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Simply using 2 pointer the best optimal approach

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            nums[i]=0;
            j++;
        }
    }

    for(int i=0;i<n;i++)cout<<nums[i]<<" ";
}