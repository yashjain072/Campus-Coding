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
    int i=0,j=0,k=n-1;
    while(i<=k)
    {
        if(a[i]==1)
        {
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else if(a[i]==2)
        {
            swap(a[i],a[k]);
            k--;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

