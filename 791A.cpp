#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b,count=0;
    cin>>a>>b;

    bool flag=1;
    while(flag){
        a = a*3;
        b=b*2;
        count++;
        if(a>b){
            flag=0;
        }
        else{
            flag=1;
        }
    }
    cout<<count;
}