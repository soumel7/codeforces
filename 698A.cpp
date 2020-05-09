#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }
        if(arr[i]==1){
            if(arr[i+1]!=3){
                cnt++;
            }
        }
        if(arr[i]==2){
            if(arr[i]!=2){
                cnt++;
            }
        }
        if(arr[i]==3){
            if(arr[i]==2){
                
            }
        }
    }
}