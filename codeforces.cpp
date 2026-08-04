#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n=0;cin>>n;
    vector<int> vec1(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<n;i++){
        cout<<vec1[i]<<" ";
    }
    return 0;
}