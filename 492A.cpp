#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int i=0,cur=0,last=0;
    while(n>0){
        i++;
        cur = last+i;
        last = cur;
        n = n-cur;
        if(n<0){
            i--;
        }
    }
    cout<<i;
    
}