#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]-'0'>=5){
            s[i] = '0'+9-s[i]+'0';
        }
        cout<<s[i];
    }
    
    


}