#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

//Extra time and space
// void printAllSubsequence(vector<int>&arr,vector<int>&temp,int index,int n,int sum,int k,set<vector<int>>&st){
//     if(index>=n||sum>=k){
//         if(sum==k){
//             // sort(temp.begin(),temp.end());
//             st.insert(temp);
//         }
//         return ;
//     }
//     sum=sum+arr[index];
//     temp.push_back(arr[index]);
//     printAllSubsequence(arr,temp,index+1,n,sum,k,st);
//     temp.pop_back();
//     sum=sum-arr[index];
//     printAllSubsequence(arr,temp,index+1,n,sum,k,st);
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>arr(n);
//     set<vector<int>>st;
//     for(int i=0;i<n;i++)cin>>arr[i];
//     vector<int>temp;
//     sort(arr.begin(),arr.end());
//     printAllSubsequence(arr,temp,0,n,0,k,st);
//     vector<vector<int>>ans(st.begin(),st.end());
//     printVector(ans);

// }




/**Optimised*/
void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if (arr[i] > target) break;
    ds.push_back(arr[i]);
    findCombination(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
}
vector < vector < int >> combinationSum2(vector < int > & candidates, int target) {
  sort(candidates.begin(), candidates.end());
  vector < vector < int >> ans;
  vector < int > ds;
  findCombination(0, target, candidates, ans, ds);
  return ans;
}