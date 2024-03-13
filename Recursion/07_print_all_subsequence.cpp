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
void printAllSubsequence(vector<int>&arr,vector<int>&temp,int index,int n){
    if(index>=n){
        printVector(temp);
        return ;
    }
    temp.push_back(arr[index]);
    printAllSubsequence(arr,temp,index+1,n);
    temp.pop_back();
    printAllSubsequence(arr,temp,index+1,n);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>temp;

    printAllSubsequence(arr,temp,0,n);
}