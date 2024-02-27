#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;

    vector<int>num1(n1),num2(n2);
    for(int i=0;i<n1;i++)cin>>num1[i];
    for(int i=0;i<n2;i++)cin>>num2[i];

    int i,j,prev=-1;


    //Union of two sorted array
    for(i=0,j=0;i<n1,j<n2;){
        if(num1[i]==num2[j]){
            if(prev!=num1[i])cout<<num1[i]<<" ";
            prev=num1[i];
            i++;
            j++;
            
        }
        else if(num1[i]<num2[j]){
            if(prev!=num1[i])cout<<num1[i]<<" ";
            prev=num1[i];
            i++;
        }
        else if(num1[i]>num2[j]){
            if(prev!=num2[j])cout<<num2[j]<<" ";
            prev=num2[j];
            j++;
        }
    }

    if(i!=n1){
        while(i<n1){
            if(prev!=num1[i])cout<<num1[i]<<" ";
            prev=num1[i];
            i++;
        }
    }
    if(j!=n2){
        while(j<n2){
            if(prev!=num2[j])cout<<num2[j]<<" ";
            prev=num2[j];
            j++;
        }
    }
    cout<<endl;

    //Intersection of two sorted array

        for(i=0,j=0;i<n1,j<n2;){
        if(num1[i]==num2[j]){
            cout<<num1[i]<<" ";
            prev=num1[i];
            i++;
            j++;
            
        }
        else if(num1[i]<num2[j]){
            i++;
        }
        else if(num1[i]>num2[j]){
            j++;
        }
    }



}