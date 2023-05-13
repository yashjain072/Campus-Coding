#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num<0)
    {
        cout<<"Wrong";
        return 0;
    }
    int len=0;
    int temp=num;
    while(temp!=0)
    {
        len++;
        temp/=10;
    }
    long long int ans = num*num*num*num;
    int lastdigits=0;int power=1;
    while(len--)
    {
        int digit=ans%10;
        lastdigits=lastdigits+digit*power;
        power*=10;
        ans/=10;
    }
    if(lastdigits==num)cout<<"YES";
    else cout<<"NO";
    return 0;
}