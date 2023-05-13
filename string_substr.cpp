#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            string sub = s.substr(i,j-i+1);
            ans+=stoi(sub);
        }
    }
    cout<<ans;
    return 0;
}