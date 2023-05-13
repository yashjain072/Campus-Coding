#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7') continue;
        else if(s[i]=='5' && s[i+1]=='6')
        {
            i=i+1;
            continue;
        }
        else ans+=s[i];
    }
    cout<<ans;
}