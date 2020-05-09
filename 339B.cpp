#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int task[m];
    for(int i=0;i<m;i++){
        cin>>task[i];
    } 

    int a=1,time=0;
    for(int i=0;i<m;i++){
        if(a!=task[i]){
            a++;
            time++;
        }
        else{
            time++;
        }
    }
    cout<<time;



    return 0;
}