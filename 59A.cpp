#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==toupper(s[i])){
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
        return 0;
    }
    if(upper<=lower){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
        return 0;
    }
    
}