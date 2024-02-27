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

    //Brute force simply use sorting algo 
    //merge sort nlogn
    //quick sort nlogn
    //..so on

    //Better
    //traverse and count number of zeroes ones and twos
    //in second traversal put zeroes ones and twos


    //Most optimal solution
    //Dutch national flag algorithm- using 3 pointer
    //low mid high
    //o to low-1 all zeroes
    // low to mid-1 all ones
    //high-1 to n-1 all twos

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}