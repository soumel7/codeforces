#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<0;
        return 0;
    }
    int temp=-1,cnt=0;
    if(m%n==0){
        temp = m/n;
    }
    while(temp%2==0){
        temp = temp/2;
        cnt++;
    }
    while(temp%3==0){
        temp = temp/3;
        cnt++;
    }
    if(temp==1){
        cout<<cnt;
        return 0;
    }
    cout<<-1;
}