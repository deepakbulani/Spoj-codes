#include<bits/stdc++.h>
using namespace std;
int b[1000002];
long long int a[1000002];
long long int f[1000002];
int d[1000002];
int cnt,ans;
void fun()
{
     for(int i=0;i<=1000000;i++)
        f[i]=1;
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
     if(d[i]!=1)
     f[i]=f[i]*(d[i]+1);
     f[i]=f[i]-i;
     a[i]=a[i-1]+f[i];
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
        printf("%lld\n",a[n]);
    }
}

