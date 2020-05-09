#include<bits/stdc++.h>
using namespace std;
int cal(int num){
    int ans=0;
    while (num)
    {
        ans+=num%10;
        num=num/10;
    }
    return ans;
    
}
int main(){
    int n,ans=0;
    cin>>n;
    while (n)
    {
        /* code */
        ans++;
        if(cal(ans)==10){
            n--;
        }
        
    }
    cout<<ans;
    
   
}