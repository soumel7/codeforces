#include <bits/stdc++.h>
using namespace std;
int main(){

    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int ans = a.compare(b);
    if(ans<0){
        cout<<-1;
    }    
    if(ans>0){
        cout<<1;
    }
    if(ans==0){
        cout<<0;
    }
    return 0;
}