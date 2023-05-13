#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>dep[i];
        dep[i]=arr[i]+dep[i];
    }
    sort(arr,arr+n);
    sort(dep,dep+n);
    int platform=1,maxi=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            platform++;
            i++;
        }
        else 
        {
            platform--;
            j++;
        }
        if(platform>maxi)maxi=platform;
    }
    cout<<maxi;
    return 0;
}