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
    int k;
    cin>>k;
    int i=0,j=0;
    int sum=0,count=0,fcount=0;
    while(i<n && j<n)
    {
        if(a[j]>=k)
        {
            j++;
            i=j;
            count=0;
        }
        else if(sum+a[j]>=k)
        {
            sum-=a[i];
            count--;
            i++;
        }
        else
        {
            sum+=a[j];
            count++;
            j++;
        }
        fcount=max(count,fcount);
    }
    cout<<fcount;
    return 0;
}