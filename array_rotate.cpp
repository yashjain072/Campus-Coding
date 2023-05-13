#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=n-k;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-k;i++)
    {
        cout<<a[i]<<" ";
    }
}

/*
5
10 20 30 40 50
2

40 50 10 20 30
*/