#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i+=2){
        if(nums[i]!=nums[i+1]){
            cout<<nums[i];
            break;
        }
    }
}