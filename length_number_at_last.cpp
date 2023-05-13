#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0,sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<'0' || s[i]>'9') count++;
        else
        {
            while(s[i]>=0 && s[i]<=9)
            {
                sum=sum*10+int(s[i]);
                i++;
            }
            break;
        }
    }
    
}