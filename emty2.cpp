#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[120004];
    int t;
    vector<int> v;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        scanf("%s",a);
        int i=0;
        while(a[i]!='\0')
        {
            v.push_back(a[i]-'0');
          if(v.size()>=3)
          {
            int u=v.size();
            if(v[u-3]==1 && v[u-2]==0 && v[u-1]==0)
            {
                 v.erase(v.begin()+ (u-1));
                 v.erase(v.begin()+ (u-2));
                 v.erase(v.begin()+ (u-3));
            }
          }
          i++;
        }
        printf("Case %d: ",k);
        if(v.size()==0)
            printf("yes\n");
        else
            printf("no\n");
            v.clear();
    }
}
