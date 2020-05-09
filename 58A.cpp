#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a="hello";
    cin>>s;
    int pass=0,j=0;

    for(int i=0;i<s.size();i++){
        if(s[i]==a[j]){
            j++;
            pass++;
        
        if(pass==5){
            break;
        }
        }
    }
    if(pass==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}