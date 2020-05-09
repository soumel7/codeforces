#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res=s;
    for(int i=s.length()-1;i>=0;i--){
        res+=s[i];
    }
    cout<<res;
}