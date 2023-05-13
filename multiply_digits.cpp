#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    while(n!=0)
    {
        int digit=n%10;
        ans*=digit;
        n/=10;
    }
    cout<<ans;
    return 0;
}