#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,i,a[100500],rez;
    cin>>n>>l;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    rez = 2*max(a[0],l-a[n-1]);
    for(i=0;i<n-1;i++){
        rez = max(rez,a[i+1]-a[i]);
    }
    printf("%10f\n",rez/2.);
    return 0;

}