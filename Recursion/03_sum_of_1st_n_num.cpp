#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n==0)return 0;
    return n+sumOfN(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of 1st n numbers is "<<sumOfN(n);
}