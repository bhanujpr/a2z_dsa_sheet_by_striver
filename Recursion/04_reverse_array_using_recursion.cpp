#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(int l,int r,vector<int>&arr){
    if(l>=r)return ;
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    reverseArray(l+1,r-1,arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    reverseArray(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}