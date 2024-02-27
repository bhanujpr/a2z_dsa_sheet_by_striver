#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(10,0);
    for(int i=0;i<10;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){cout<<"false";break;}
    }
    
    // cout<<"true";
}