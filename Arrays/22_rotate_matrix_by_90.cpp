#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    //Brute force : Take one matrix and now 1st row push to last column 2nd row to 2nd last so on

    //Optiaml approach: 1) Find the transpose of the matrix 2) Reverse every row
    vector<vector<int>>arr(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    } 


    //swap
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // } 
    
    for(int i=0;i<3;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}