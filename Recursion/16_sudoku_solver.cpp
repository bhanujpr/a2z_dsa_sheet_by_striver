#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

    bool isValid(int i,int j,vector<vector<char>>&board,char c){
        for(int row=0;row<9;row++){
            if(board[row][j]==c)return false;
        }
        for(int col=0;col<9;col++){
            if(board[i][col]==c)return false;
        }

        int row,col;
            if(i<3)row=0;
            else if(i>2&&i<6)row=3;
            else row=6;
            if(j<3)col=0;
            else if(j>2&&j<6)col=3;
            else col=6;

        for(int a=row;a<row+3;a++){
            for(int b=col;b<col+3;b++){
                if(board[a][b]==c)return false;
            }
        }
    return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(i,j,board,c)){
                            board[i][j]=c;
                            if(solve(board)==true)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

int main(){
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
    solve(board);
    for(int i= 0; i< 9; i++){
        for(int j= 0; j< 9; j++)
            cout<<board[i][j]<<" ";
            cout<<"\n";
    }
}