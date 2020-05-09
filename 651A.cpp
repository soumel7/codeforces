#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2;
    cin>>a1>>a2;
    int time=0;

    while(a1>0&&a2>0){
        if(a1==1&&a2==1){
            break;
        }
        if(a1<a2){
            a1+=1;
            a2-=2;
            time++;
        }
        else{
            a2+=1;
            a1-=2;
            time++;
        }
        
    }
    cout<<time;
}