#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int>arr1={1,1,2,3,4},arr2={2,3,7,9};

    int n=arr1.size()-1;
    for(int i=0;i<arr2.size();i++){
        if(arr2[i]<arr1[n-1]){
            swap(arr2[i],arr1[n-i]);
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }


    ///We can also do this using gap algorithm derived from shell sort
}