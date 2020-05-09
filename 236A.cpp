#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,chars=" ";
    cin>>s;
    int count=0;
    for(char x:s){
        for(int i=0;chars[i]!='\0';i++){
            if(chars[i+1]=='\0' && chars[i]!=x){
                count++;
                chars+=x;
            }
            else if(chars[i]==x){
                break;
            }
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}