#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    vector<int> arr={-1,-2,-2,-1,-1,2,0,2,0,0,2};
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n=arr.size();
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    for(int i=0;ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<"\n";
    }

    //Brute force
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int temp=sum-arr[i]-arr[j];
    //         for(int k=j+1;k<n;k++){
    //             if(temp==arr[k]){
    //                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
    //             }
    //         }
    //     }
    // }

    //Best approach 2 pointer
    //1st sort
    //then use 2 pointer

}