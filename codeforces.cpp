#include<iostream>
using namespace std;

int main(){
    int n=0,i=0;
    cin>>n;
    int a[n];
    while(i<n){
        cin>>a[i];
        i++;
    }
    int count=1,check=1;
    for(int i=1; i<n; i++){
            if(a[i]>=a[i-1]){
                count++;
            }
            else{
                check=max(check,count);
                count=1;
            }
    }
    check=max(check,count);
    cout<<check;
    return 0;
}