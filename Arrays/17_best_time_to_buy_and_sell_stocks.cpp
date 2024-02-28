#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int arr[]={7,1,4,5,3,6,2};
    //if you sell on ith day then you buy it before that day when price is minimum
    int min=arr[0];
    int profit=0;
    for(int i=0;i<7;i++){
        if(arr[i]<min)min=arr[i];
        if(arr[i]-min>profit)profit=arr[i]-min;
    }
    cout<<profit;
}