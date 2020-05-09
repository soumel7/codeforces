#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    bool flag = 0;
    for(int i=0;i<a.length();i++){
        int ones = count(a.begin()+i,a.begin()+i+7,'1');
        int zeros = count(a.begin()+i,a.begin()+i+7,'0');
        if(ones>=7||zeros>=7){
            flag = 1;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;
}