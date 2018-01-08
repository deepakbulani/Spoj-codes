#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200005];
    int t,mark,cnt,l;
    vector<pair<char,int> > v;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        cnt=0;
        scanf("%s",a);
        v.push_back(make_pair('-',-1));
        l=strlen(a);
        for(int i=0;i<l;i++)
        {
            v.push_back(make_pair(a[i],i));
            int u=v.size();
            if(v.size()>=3&&v[u-3].first=='1' && v[u-2].first=='0' && v[u-1].first=='0')
            {
                 v.pop_back();
                 v.pop_back();
                 v.pop_back();
            }
        mark=v.back().second;
       cnt=max(cnt,i-mark);
    }
            printf("Case %d: ",k);
        printf("%d\n",cnt);
}
}
