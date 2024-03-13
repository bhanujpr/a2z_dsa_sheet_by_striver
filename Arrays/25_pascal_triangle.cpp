#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int numRows;
    cin>>numRows;

    //Brute using (R-1)C(C-1)combination formula



    //Optimal
     vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
                ans[i].resize(i+1);
                ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){
                int a=ans[i-1][j-1];
                int b=ans[i-1][j];
                    ans[i][j]=a+b;
            }
        }


        for(int i=0;i<numRows;i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<" "<<ans[i][j];
            }
            cout<<endl;
        }
    
        
}