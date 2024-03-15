#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;


int main(){
    vector<vector<int>> intervals = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};



    //Brute force
    //2loops


    //optimal
    sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            vector<int>temp=intervals[i];
            int j=i+1;
            for(j=i+1;j<intervals.size();j++){
                if(temp[1]>=intervals[j][0]){
                    temp[1]=max(temp[1],intervals[j][1]);
                }
                else{
                    break;
                }
            }
            i=j-1;
            ans.push_back(temp);
        }
    for(int i=0;i<ans.size();i++){
        cout<<",["<<ans[i][0]<<","<<ans[i][1]<<"]";
    }

}