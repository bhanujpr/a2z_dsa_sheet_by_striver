#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0,squareSum=0;
    int nsum=0,nsqSum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        nsum=nsum+i;
        squareSum=squareSum+arr[i]*arr[i];
        nsqSum=nsqSum+i*i;
    }

    int a=abs(nsum-sum);
    int b=abs(nsqSum-squareSum);
    int c=b/a;

    // cout<<(a+c)/2<<endl;//missing number
    // cout<<(a+c)/2-a;//repeating number


    //optimal approach but here the number should not be repeated use zero instead of repeating number
    int XOR1=0;
    int XOR2=0;
    for(int i=0;i<n;i++){
        XOR1=XOR1^i;
        XOR2=XOR2^arr[i];
    }
    int ans=XOR1^XOR2;
    // cout<<XOR1<<endl;
    // cout<<XOR2<<endl;
    cout<<ans;



}