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


    //Brute simply sort and count element that appear more than n/2 times
    //or simply pick element count its occurence in whole array if it is >n/2 its our ans
    //T.C(O(n^2))

    //Better-> hashing(count occurence of elements and return majority)

    //Moore voting algorithm 
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i]) cnt++;
        else cnt--;
    }
    //checking if it is majority
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) cout<<el;
    
}