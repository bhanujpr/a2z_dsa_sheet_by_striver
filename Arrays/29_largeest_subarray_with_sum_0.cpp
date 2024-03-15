#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int>arr={1,-1,3,2,-2,-8,1,7,10,23};
    map<int,int>mpp;

    int prefixSum=0;
    int maxLen=0;

    for(int i=0;i<arr.size();i++){
        prefixSum=prefixSum+arr[i];
        if(mpp.find(prefixSum)!=mpp.end()){
            int index=mpp[prefixSum];
            maxLen=max(maxLen,i-index);
        }
        else{
            mpp.insert({prefixSum,i});
            if(prefixSum==0){
            maxLen=max(maxLen,i+1);
            }
        }
    }
    cout<<maxLen;
}