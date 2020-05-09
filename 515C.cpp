#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    string ans;
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            ans+="2";
        }
        if(s[i]=='3'){
            ans+="3";
        }
        if(s[i]=='4'){
            ans+="322";
        }
        if(s[i]=='5'){
            ans+="5";
        }
        if(s[i]=='6'){
            ans+="53";
        }
        if(s[i]=='7'){
            ans+="7";
        }
        if(s[i]=='8'){
            ans+="7222";
        }
        if(s[i]=='9'){
            ans+="7332";
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans;
}