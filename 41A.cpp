#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    
}