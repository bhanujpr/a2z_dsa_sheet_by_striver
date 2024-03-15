#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int k=6;
    vector<int>arr={4,2,2,6,4};

    map<int,int>mpp;
    int xr=0;
    mpp[xr]+=1;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<cnt;
}