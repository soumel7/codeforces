#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        if(arr[i]+arr[i+1]>arr[i+2]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}