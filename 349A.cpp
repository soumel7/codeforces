#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=0,cnt_25=0,cnt_50=0,a[100005],x=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==25)
        {
            cnt_25++;
        }
        else if(a[i]==50)
        {
            if(cnt_25<1)
            {
                x=0;
                break;
            }
            else
            {
                cnt_25--;
                cnt_50++;
            }
        }
        else
        {
            if(cnt_25>0&&cnt_50>0)
            {
                cnt_25--;
                cnt_50--;
            }
            else if(cnt_25>=3)
            {
                cnt_25-=3;
            }
            else
            {
                x=0;
                break;
            }
        }

    }
    if(x==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}