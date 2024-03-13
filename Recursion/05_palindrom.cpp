#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrome(string &st,int l,int r){
    if(l>=r)return true;
    if(st[l]!=st[r])return false;
    isPalindrome(st,l+1,r-1);
}

int main(){
    string st;
    cin>>st;
    cout<<isPalindrome(st,0,st.size()-1);
}