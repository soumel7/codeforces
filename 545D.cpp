#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=sum){
            count++;
            sum+=arr[i];
        }
        
    }
    cout<<count;
}