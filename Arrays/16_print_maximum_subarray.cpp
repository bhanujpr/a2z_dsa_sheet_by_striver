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

    //optimal-> kadane's algo
    int sum=0;
    int maxi=arr[0];
    int start,startindex,endIndex;
    for (int i = 0; i < n; i++) {
        if(sum==0)start=i;

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            startindex=start;
            endIndex=i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }
    for(int i=startindex;i<=endIndex;i++)cout<<arr[i]<<" ";
}