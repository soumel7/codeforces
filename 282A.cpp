#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    string x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x=="X++"||x=="++X"){
            ans++;
        }
        if(x=="--X" || x=="X--"){
            ans--;
        }
    }
    cout<<ans;
    return 0;
}