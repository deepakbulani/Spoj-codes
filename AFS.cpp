#include<bits/stdc++.h>
using namespace std;
int b[1000002];
int a[1000002];
int f[1000002];
int d[1000002];
int cnt,ans;
void fun()
{
    memset(f,1,sizeof(f));
      for(int i=0;i<5;i++)
        printf("%d ",f[i]);
    for(int i=0;i<=1000000;i++)
        d[i]=i;
 b[0]=1;
 b[1]=1;
 for(int i=2;i<=1000000;i++)
 {
     if(b[i]==0)
     {
         for(int j=i+i;j<=1000000;j=j+i)
         {
             b[j]=1;
             cnt=0;
             ans=0;
             if(i<=sqrt(d[j]))
             {
          while(d[j]%i==0)
          {
              cnt++;
              d[j]=d[j]/i;
              ans=ans+pow(i,cnt);
          }
             f[j]=f[j]*(1+ans);
         }
         }
     }
     a[i]=a[i-1]+f[i];
 }
 for(int i=2;i<=1000000;i++)
 {
     if(d[i]!=1)
        f[i]=f[i]*(d[i]+1);
 }
}
int main()
{
    int t,n;
    scanf("%d",&t);
    fun();
    while(t--)
    {
        scanf("%d",&n);
    }
}

