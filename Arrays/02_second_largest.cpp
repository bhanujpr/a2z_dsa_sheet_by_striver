#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    // cout<<"Enter length of array";
    cin>>n;
    vector<int> arr;
    int mx1=0,mx2=0;
    while(n--){
        int temp;
        cin>>temp;
        if(mx1==0)mx1=temp;
        else if(mx1<temp){
            mx2=mx1;
            mx1=temp;
        }
        else if(mx2==0)mx2=temp;
        else if(temp>mx2)mx2=temp;
    }
    cout<<mx2;

}