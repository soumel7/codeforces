#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    int m;
    while(k--){
    m=n%10;
    if(m==0){
        n=n/10;
    }
    else{
        n = n-1;
    }}
    cout<<n;
}