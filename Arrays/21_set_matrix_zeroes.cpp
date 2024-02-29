#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int arr[4][4];
    int row[4];
    int col[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(row[i]==0||col[i]==0)cout<<"0 ";
            else cout<<"1 ";
        }
        cout<<endl;
    }


//More optimised approach can be formed by taking the dummy array inside the matrix itself

}