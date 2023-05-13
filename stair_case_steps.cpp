#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        int setbit = n&1;
        if(setbit==1) ans++;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}