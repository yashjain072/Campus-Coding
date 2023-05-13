#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sr=0,er=n-1,sc=0,ec=m-1;
    int i=0;
    while(i<n*m)
    {
        for(int j=sc;j<=ec;j++)
        {
            cout<<a[sr][j]<<" ";
            i++;
        }
        sr++;
        for(int j=sr;j<=er;j++)
        {
            cout<<a[j][ec]<<" ";
            i++;
        }
        ec--;
        for(int j=ec;j>=sc;j--)
        {
            cout<<a[er][j]<<" ";
            i++;
        }
        er--;
        for(int j=er;j>=sr;j--)
        {
            cout<<a[j][sc]<<" ";
            i++;
        }
        sc++;
        for(int j=sc;j<ec;j++)
        {
            cout<<a[sr][j]<<" ";
            i++;
        }
    }
    return 0;
}
/*
     c C

     1 2 3
rR   4 5 6
     7 8 9
1 2 3 6 9 8 7 4
*/