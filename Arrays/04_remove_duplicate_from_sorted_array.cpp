#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])ans.push_back(arr[i-1]);
    }
    if(arr[n-1]!=ans[ans.size()-1])ans.push_back(arr[n-1]);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}