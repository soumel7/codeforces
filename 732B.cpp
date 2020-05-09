#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,temp,a=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]+arr[i+1]<k){
            temp = k-arr[i]-arr[i+1]; 
            arr[i+1]+=temp;
            a +=temp;
        }
    }
    cout<<a<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}