#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    vector<int>v;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        val = arr[i+1]-arr[i];
        v.push_back(val);
    }
    for(int i=0;i<n;i++){

    }
}