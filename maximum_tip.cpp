#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> b(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<vector<int>> loss;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        v.push_back(abs(a[i]-b[i]));
        v.push_back(a[i]);
        v.push_back(b[i]);
        loss.push_back(v);
    }
    sort(loss.begin(),loss.end());
    for(int i=0;i<loss.size();i++)
    {
        for(int j=0;j<loss[0].size();i++)
        {
            cout<<loss[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
