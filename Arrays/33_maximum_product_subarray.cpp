#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;


int main(){
    vector<int>arr={-1,0,1,2,3,-4,6,0,1,-2,-9,7,-5,-2};

    int prod=1;
    int mx=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            prod=1;
        }
        else{
            prod=prod*arr[i];
            if(prod>mx)mx=prod;
        }
    }

    prod=1;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==0){
            prod=1;
        }
        else{
            prod=prod*arr[i];
            if(prod>mx)mx=prod;
        }
    }

    cout<<mx;
}