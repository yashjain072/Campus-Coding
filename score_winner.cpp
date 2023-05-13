#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    map<string,int> mp;
    for(int i=0;i<(N*(N-1))/2;i++)
    {
        string team1,team2,score;
        cin>>team1>>team2>>score;
        if(score[0]>score[2])
        {
            if(mp.find(team1)!=mp.end())
            {
                mp[team1]+= 3;
            }
            else mp[team1]=3;
        }
        else if(score[0]<score[2])
        {
            if(mp.find(team2)!=mp.end())
            {
                mp[team2]+= 3;
            }
            else mp[team2] = 3;
        }
        else
        {
            if(mp.find(team1)!=mp.end())
            {
                mp[team1]+= 1;
            }
            else mp[team1]=1;
            if(mp.find(team2)!=mp.end())
            {
                mp[team2]+= 1;
            }
            else mp[team2]=1;
        }
    }
    string maxW;
    int maxi=0;
    for(auto it:mp)
    {
        if((it.second) > maxi)
        {
            maxi=it.second;
            maxW=it.first;
        }
    }
    cout<<maxW<<endl;
    cout<<maxi;
    return 0;
}