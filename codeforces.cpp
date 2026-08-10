#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    sort(v.rbegin(),v.rend());
    int mine=0;
    int count=0;

    for(int i=0;i<n;i++){
        mine+=v[i];
        count++;
        if(mine>total-mine){
            break;
        }
    }
    cout<<count<<endl;
}