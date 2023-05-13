#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if(num==0 || num == 1) return false;
    if(num==2 || num == 3) return true;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    int great;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(!isPrime(i))
            {
                cout<<"Not Strange";
                return 0;
            }
            else great=i;
        }
    }
    if(sqrt(n)<great) cout<<"Strange";
    else cout<<"Not Strange";
    return 0;
}