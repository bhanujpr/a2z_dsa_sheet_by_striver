#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

bool checkSafe(int row,int col,vector<string>&board,int n){

    int r=row;
    int c=col;

    while(r>=0&&c>=0){
        if(board[r][c]=='Q')return false;
        r--;
        c--;
    }

    r=row;
    c=col;

    while(r<n&&c>=0){
        if(board[r][c]=='Q')return false;
        r++;
        c--;
    }
    r=row;
    c=col;
    while(c>=0){
        if(board[r][c]=='Q')return false;
        c--;
    }
    return true;
}

void fillNQueen(vector<vector<string>>&ans,vector<string>&board,int n,int col){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(checkSafe(row,col,board,n)){
        board[row][col]='Q';
        fillNQueen(ans,board,n,col+1);
        board[row][col]='.';
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)board[i]=s;

    fillNQueen(ans,board,n,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    
}