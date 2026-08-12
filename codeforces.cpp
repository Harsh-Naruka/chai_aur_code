#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    set<char> s;
    string n;
    cin>>n;
    for(char x:n){
        s.insert(x);
    }
    if(s.size()%2==0)cout<<"CHAT WITH HER!"<<endl;

    }
}