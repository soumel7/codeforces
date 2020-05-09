#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int dist=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+'){
            dist++;
        }
        if(s1[i]=='-'){
            dist--;
        }
    }
    int dist2=0;
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='+'){
            dist2++;
        }
        if(s2[i]=='-'){
            dist2--;
        }
        if(s2[i]=='?'){
            
        }
    }
}