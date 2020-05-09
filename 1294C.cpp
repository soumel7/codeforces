#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        set<int>arr;
        for(int i=2;i*i<=n;i++){
            if(n%i==0&&!arr.count(i)){
                arr.insert(i);
                n/=i;
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0&&!arr.count(i)){
                arr.insert(i);
                n/=i;
                break;
            }
        }
        if(int(arr.size())<2||n==1||arr.count(n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            arr.insert(n);
            for(auto it :arr) cout<<it<<" ";
            cout<<endl;
        }
    }
}