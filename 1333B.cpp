#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,temp;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],b[n];
        for(int i=1;i<n;i++){
            if(a[0]==b[0]){
                while(a[i]!=b[i]){
                    a[i]+=a[i-1];   
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
}