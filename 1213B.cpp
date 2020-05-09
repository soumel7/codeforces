#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n,v;
    cin>>t;
    
    while(t>0){
        cin>>n;
        int arr[n];
        int count =0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        v = arr[n-1];

        for(int i=n-1;i>=0;i--){
            if(v<arr[i]){
                count++;
            }
            else{
                v = arr[i];
            }
        }
       
        t--;
        cout<<count<<endl;
    }
    return 0;
}