#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void generateCombination(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int k,int n,int sum,int sz,int index){
        if(sz>=k||sum>=n||index>=9){
            if(sz==k&&sum==n){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[index]);
        sum=sum+nums[index];
        generateCombination(nums,temp,ans,k,n,sum,sz+1,index+1);
        temp.pop_back();
        sum=sum-nums[index];
        generateCombination(nums,temp,ans,k,n,sum,sz,index+1);
}

vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        vector<vector<int>>ans;
        generateCombination(nums,temp,ans,k,n,0,0,0);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
        cout<<endl;
        }
}

int main(){
    // vector<vector<int>> ans;
    combinationSum3(3,11);
   

}