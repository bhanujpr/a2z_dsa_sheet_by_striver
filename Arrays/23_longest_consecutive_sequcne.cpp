#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int> arr(10);
    for(int i=0;i<10;i++)cin>>arr[i];




    //Brute force
    // Two loops


    //Better
    sort(arr.begin(),arr.end());
    int l=1;
    int mx=1;
    for(int i=0;i<9;i++){
        if(arr[i+1]==arr[i]+1)mx++;
        else{
            if(mx>l)l=mx;
            mx=1;
        }
        if(mx>l)l=mx;
    }
    cout<<l;

    //Optimal
    //put into set
    //look for previous
    //for 102 check is 101 is there is yes then not start from it
    //....
    //for 1 no previous go from looking next 2 yes from 2 look 3 so on...
    

}