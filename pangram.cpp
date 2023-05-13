#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}