#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int>arr(3);
    //1 1 1 
    int k=2;
    for(int i=0;i<10;i++)cin>>arr[i];
    //Brute
    /**
     * Check all subarray
     * If for any subarray sum of subarray ==k
     * then cnt++;
    */


   //Optimal
   //Prefix sum
    map<int,int>mpp;
    mpp[0]=1;
    int preSum=0,cnt=0;
    for(int i=0;i<10;i++){
        preSum+=arr[i];
        cnt+=mpp[preSum-k];
        mpp[preSum]+=1;
    }    
    cout<<cnt;
}