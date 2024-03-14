#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<int>temp){
    for(int i=0;i<temp.size();i++){
        cout<<" "<<temp[i];
    }
    cout<<endl;
}
void printAllSubsequence(vector<int>&arr,vector<int>&temp,int index,int n,int sum,int k){
    if(index>=n||sum>=k){
        if(sum==k)printVector(temp);
        return ;
    }
    sum=sum+arr[index];
    temp.push_back(arr[index]);
    printAllSubsequence(arr,temp,index,n,sum,k);
    temp.pop_back();
    sum=sum-arr[index];
    printAllSubsequence(arr,temp,index+1,n,sum,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>temp;

    printAllSubsequence(arr,temp,0,n,0,k);
}