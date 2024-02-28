#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int arr[]={1,3,5,4,2};
    int n=5;
    /***
     * Brute force
     * 1)Generate all permutation using recursion
     * 2)Search the given permutation
     * 3)return the next permutation if not then return first
    */


   /**
    * Better
    * stl solution 
    * next_permutation(A.begin(),A.end());
    * return A;
   */


  /**
   * Most optimal 
   * 1)Traverse from back and find 1st index where A[i]<A[i+1] and store that index
   * 2)Again traverse from back find index j where A[j]<A[i]
   * 3)Swap A[i] and A[j]
   * 4)reverse all in right of i
  */
    int i;
    for(i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1])break;
    }
    // int j;
    // cout<<arr[i];
    for(int j=n-1;j>=0;j--){
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            break;
        }
    }
    // // cout<<j;
    // // cout<<i;
    // cout<<arr[i];
    i++;
    for(int j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }

}
