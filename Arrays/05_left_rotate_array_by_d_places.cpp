#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans=arr;
    for(int i=0,j=d-1;i<d,j>=0;i++,j--){
        ans[i]=arr[j];
    }
    for(int i=d,j=n-1;i<n,j>=d;i++,j--){
        ans[i]=arr[j];
    }

    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=ans[i];
        ans[i]=ans[j];
        ans[j]=temp;
    }

    for(int i=0;i<n;i++)cout<<ans[i]<<" ";


}