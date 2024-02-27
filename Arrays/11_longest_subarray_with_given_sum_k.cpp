#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;



int main(){
    int n,k;
    cin>>n>>k;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];


    //Brute force
    // int len=0;
    // for(int i=0;i<n;i++){
    //     int s=0;
    //     for(int j=i;j<n;j++){
    //         s+=nums[j];
    //        if(s==k)len=max(len,j-i+1);
    //     }
    // }
    //T.C 0(n^2)



    //better but this is valid for array with all element greater than 0
    //try for this 2 0 0 0 3 and k=3
    // so we modify it simply check the sum if it was previously there don't push it again
    // map<int,int>prefixSumMap;
    // int len=0;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //     if(sum==k){
    //         len=max(len,i);
    //     }
    //     int rem=sum-k;
    //     if(prefixSumMap.find(rem)!=prefixSumMap.end()){
    //         len=max(len,i-prefixSumMap[rem]);
    //     }
    //     if(prefixSumMap.find(sum)==prefixSumMap.end())prefixSumMap[sum]=i;
    // }
    // T.C O(nlog(n))unordered map  / O(n^2)ordered map

    
    // optimal kadane's algo go go if sum increase trim trim
    // work for positive array elements only
    int len=0;
    int sum=nums[0];
    for(int i=0,j=0;i<n&&j<n;){
        if(i<=j&&sum>k){
            sum=sum-nums[i];
            i++;
        }
        if(sum==k){
               len=max(len,j-i+1); 
            }
        
        j++;
        if(j<n)sum=sum+nums[j];

    }

    

    cout<<len;
}