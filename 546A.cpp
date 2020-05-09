#include<bits/stdc++.h>
using namespace std;

int main(){
    long k,n,w;
    cin>>k>>n>>w;
    long cost=0,a=k;
    for(int i=0;i<w;i++){
        cost=cost+a;
        a = a+k;
    }
    cout<<cost-n;
}