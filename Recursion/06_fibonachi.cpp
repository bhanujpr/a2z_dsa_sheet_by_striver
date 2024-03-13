#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int printFibonachi(int n){
    if(n<=1)return n;
    return printFibonachi(n-1)+printFibonachi(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<printFibonachi(n);
}