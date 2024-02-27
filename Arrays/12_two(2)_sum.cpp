#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;


    vector<int> nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];


    //Brute force
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==k)cout<<i<<" "<<j<<endl;
    //     }
    // }


    //Better using hashing(map)
    // map<int,int>mpp;
    // for(int i=0;i<n;i++){
    //     int rem=k-nums[i];
    //     if(mpp.find(rem)!=mpp.end()){
    //         cout<<i<<" "<<mpp[rem]<<endl;
    //     }
    //     if(mpp.find(nums[i])==mpp.end()){
    //         mpp[nums[i]]=i;
    //     }
    // }



    //using two pointer
    sort(nums.begin(),nums.end());
    int left=0,right=n-1;
    while(left<=right){
        int sum = nums[left]+nums[right];
        if(sum==k){
            cout<<nums[left]<<" "<<nums[right]<<endl;
            left++;
            right--;
        }
        if(sum<k)left++;
        if(sum>k)right--;
    }
}