#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    /**
     * Case 1:
    */
    //Equal pos and neg
    int arr[]={3,1,-2,-5,2,-4};



    //brute take all +ve element in one array and all negative in one array
    //in 2nd traversal push alternating


    //optimal: one pass solution
    //take new ans array and two pos,neg pointer pointing +ve(0,2,4) and -ve(1,3,5) indexes in ans array
    //traverse in array if element is +ve push at pos pointer and pos=pos+2 if negative push at -ve neg=neg+2;
    vector<int> ans(6,0);
    int pos,neg;
    for(int i=0,pos=0,neg=1;i<6;i++){
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos=pos+2;
        }
        else {
            ans[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(int i=0;i<6;i++)cout<<ans[i]<<" ";

    /**
     * Case 2: not sure if pos and neg elements are equal or  pos!=neg
     * //Here optimal don't work so fall back to brute force use two arrays
    */


}