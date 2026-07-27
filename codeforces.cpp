#include<iostream>
using namespace std;

int main{
    int n=0,i=0;
    cin>>n;
    int a[n];
    while(i<n){
        cin>>a[i];
        i++;
    }
    int count=0,check=0;
    while(i<n){
        
        if(a[i]<a[i+1])count++;
        else{
            check=count;
        }
        i++;
    }
    return 0;
}