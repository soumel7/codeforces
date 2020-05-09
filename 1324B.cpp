#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n/2+1;i++){
            if(arr[i]==arr[n-1-i]){
                count+=2;
            }
        }
        if(count>2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}