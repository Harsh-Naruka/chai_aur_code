#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=0;cin>>n;
    vector<int> v(n);
    int k=0;cin>>k;
    cout<<"enter the vector";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left=0;
    int right=n-1;
    while(left<right){
        if(v[left]+v[right]==k){
            cout<<v[left]<<" "<<v[right]<<endl;
            left++;
            right--;
        }
        else if(v[left]+v[right]<k) left++; 
        else right--;
    }
}