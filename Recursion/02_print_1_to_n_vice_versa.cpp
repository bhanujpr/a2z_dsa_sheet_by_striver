#include<iostream>
using namespace std;

void printName(int n){
    if(n==0)return;
    // cout<<" "<<n; n to 1
    printName(n-1);
    cout<<" "<<n;//1 to n
}
int main(){
    int n;
    cin>>n;
    printName(n);
}