#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1,temp=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else{
            if(count>temp){
                temp = count;
                count=1;
            }
            else{
                temp=temp;
                count=1;
            }
        }
    }
    if(count>temp){
        cout<<count;
    }
    else{
        cout<<temp;
    }
}
//6
//2 2 1 3 4 1
