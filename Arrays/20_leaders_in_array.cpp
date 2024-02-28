#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    //everything is smaller in right of a leader
    int arr[]={10,22,12,3,0,6};

    //Brute force pick element check in its right 
    // two loops
    
    //optimal
    //traverse from back and store max 
    //if arr[i]>max then it is leader

    int mx=arr[5];
    for(int i=5;i>=0;i--){
        if(arr[i]>=mx){
            cout<<arr[i]<<" ";
            mx=arr[i];
        }
    }

}