#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], b[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    int suma=0,sumb=0;
    for(int i=3;i>=2;i--)
    {
        if(a[i-2]==10 || a[i-1]==10) suma+= a[i]*2;
    }
}
