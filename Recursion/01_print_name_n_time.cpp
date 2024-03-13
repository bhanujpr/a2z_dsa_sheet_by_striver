#include<iostream>
using namespace std;

void printName(int n){
    if(n==0)return;
    cout<<"Bhanu ";
    printName(n-1);
}
int main(){
    int n;
    cin>>n;
    printName(n);
}