#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    set<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.insert(a);
    }

    if(arr.size()>k){
        cout<<-1<<endl;
        return ;
    }

    cout<<n*k<<endl;

    for(int i=0;i<n;i++){
        for(int b:arr){
            cout<<b<<" ";
        }
        for(int j=0;j<k-(int)arr.size();j++){
            cout<<1<<" ";
        }
        
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}