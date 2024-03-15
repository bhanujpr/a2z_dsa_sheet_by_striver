#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


void allPermutation(vector<int>&arr,vector<int>&hash,vector<vector<int>>&ans,vector<int>&temp,int n){
    if(n==arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(hash[i]==1)continue;


        temp.push_back(arr[i]);
        hash[i]=1;
        allPermutation(arr,hash,ans,temp,n+1);
        temp.pop_back();
        hash[i]=0;
    }
}

void swapPermu(vector<vector<int>>&ans,vector<int>&arr,vector<int>&temp,int index){

    if(index==arr.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        temp.push_back(arr[index]);
        swapPermu(ans,arr,temp,index+1);
        temp.pop_back();
        swap(arr[index],arr[i]);
    }
}

int main(){
    vector<int>arr={1,2,3};
    int n=arr.size();
    vector<int>hash(n,0);
    vector<int>temp;
    vector<vector<int>>ans;
    // allPermutation(arr,hash,ans,temp,0);




    swapPermu(ans,arr,temp,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }



}