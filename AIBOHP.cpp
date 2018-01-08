#include<bits/stdc++.h>
using namespace std;
int c[5002][5002];
int main()
{
    int x,k,t,ans;
       char a[5002];
       char b[5002];
           ans=0;
           scanf("%d",&x);
     scanf("%s",a);
    for(int i=x;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    for(int i=1;i<=x;i++)
        b[i]=a[x-i+1];
        for(int i=0;i<=x;i++)
            c[i][0]=0;
        for(int j=0;j<=x;j++)
            c[0][j]=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(a[i]==b[j])
                c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    ans=x-c[x][x];
    printf("%d\n",ans);
    }
