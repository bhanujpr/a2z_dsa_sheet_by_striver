#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    int mx=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        if(mx<cnt){
            mx=cnt;
        }
    }
    cout<<mx;
}