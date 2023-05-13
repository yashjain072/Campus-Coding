#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    string forw="";
    string backw="";
    for(int i=1;i<n;i++)
    {
        forw+=s[i];
    }
    forw+=s[0];
    backw+=s[n-1];
    for(int i=0;i<n-1;i++)
    {
        backw+=s[i];
    }
    if(forw==backw)cout<<1;
    else cout<<0;
    return 0;
}