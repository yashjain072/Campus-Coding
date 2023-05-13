#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l[n],r[n];
    int maxL=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxL)
        {
            maxL=a[i];
            l[i]=maxL;
        }
        else l[i]=maxL;
    }
    maxL=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxL)
        {
            maxL=a[i];
            r[i]=maxL;
        }
        else r[i]=maxL;
    }
    for(int i=0;i<n;i++)
    {
        l[i]=min(l[i],r[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(l[i]-a[i]);
    }
    cout<<ans;
    return 0;
}