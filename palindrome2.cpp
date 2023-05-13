#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int oddcount=0;
    char oddchar;
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            oddcount++;
            oddchar=it.first;
        }
    }
    if(oddcount>1 || (oddcount==1 && s.size()%2==0))
    {
        cout<<"No";
        return 0;
    }
    string first="", second="";
    for(auto it:mp)
    {
        string s(it.second/2,it.first);
        first=first+s;
        second=s+second;
    }
    /*if(oddcount==1)
    {
        if(s==(first+oddchar+second))
        {
            cout<<"Yes";
            return 0;
        }
        else cout<<"NO";
    }
    else{
        if(s==(first+second))
        {
            cout<<"Yes";
            return 0;
        }
        else cout<<"No";
    }*/
    return (oddcount==1) ? (first)
    return 0;
}