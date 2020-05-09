#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int ans[1001];
    int count=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='+'){
            continue;
        }
        else{
            ans[count++] = a[i]-'0';
        }
    }
    sort(ans,ans+count);
    for(int i=0;i<count;i++){
        cout<<ans[i];
        if(i==count-1){break;}
        cout<<"+";
    }
    return 0;
}