#include<bits/stdc++.h>
using namespace std;
int main(){
    __int64 a,b,c,k=0;
    cin>>a>>b>>c;
    if(!(a && b && c))cout<<a/3+b/3+c/3;
    else cout<<(a+b+c)/3-((a-b)%3 && (c-b)%3 && (c-a)%3)? 1:0;
}
 