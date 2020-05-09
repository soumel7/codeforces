#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[13] = {4,7,47,74,44,77,447,477,474,444,777,774,744};
    for(int i=0;i<13;i++){
        if(n%arr[i]==0){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
}