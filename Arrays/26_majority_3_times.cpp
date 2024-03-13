#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    //Boyer moore 
    int num1=-1,num2=-1,c1=0,c2=0;

    for(auto el:arr){
        if(el==num1)c1++;
        else if(el==num2)c2++;
        else if(c1==0){
            num1=el;
            c1=1;
        }
        else if(c2==0){
            num2=el;
            c2=1;
        }
        else{
            c1--;
            c2--;
        }

    }
        cout<<num1<<" "<<num2;
}