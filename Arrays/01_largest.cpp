#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    // cout<<"Enter length of array";
    cin>>n;
    vector<int> arr;
    int mx=0;
    while(n--){
        int temp;
        cin>>temp;
        if(temp>mx)mx=temp;
    }
    cout<<mx;

}