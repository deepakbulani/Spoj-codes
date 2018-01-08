#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,ans,p,s,cnt;
    long long int a[100000];
     scanf("%d",&t);
     while(t--)
     {
         scanf("%d %d",&n,&k);
         for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
         sort(a,a+n);
         p=n/k;
         int b[p];
         for(int g=0;g<p;g++)
            b[g]=1;
         s=0;
         for(j=0;j<n-1;j++)
         {
                 if(a[j]==a[j+1])
                 {
                    b[s]++;
                 }
                 else
                 {
                    s++;
                }
                if(s==p)
                    break;
         }
         ans=0;
         for(j=0;j<p;j++)
         {
         if(k-b[j]==0)
             ans=ans+0;
         else if(abs(k-b[j])>=k && b[j]%k==0)
         {
             s=(abs(k-b[j]))/k;
             if(s>0)
             {
            continue;
             }
         }
          else if(b[j]>k && b[j]%k!=0)
            {
                s=b[j]/k;
             if(s>0)
             {
            continue;
             }
            }
         else if(b[j]<k)
         {
             if(b[j]==1)
             {
              ans=ans+(k-b[j]);
              j++;
             }
         else
            ans=ans+(k-b[j]);
         }
         }
         printf("%d\n",ans);
     }
}
