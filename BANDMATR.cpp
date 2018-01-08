#include<bits/stdc++.h>
using namespace std;
long long int a[500][500];
int b[500];
int c[500];
int main()
{
    int t,n,cnt;
    scanf("%d",&t);
    while(t--)
    {
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        cnt=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==0)
                {
                   c[abs(i-j)]++;
                    cnt++;
                }
                else if(a[i][j]==1)
                {
                    b[abs(i-j)]++;
                }
            }
        }
       for(int i=n-1;i>=0;i--)
       {
           cnt=cnt-c[i];
           if(cnt==0)
            break;
           if(b[i]==0)
            continue;
           if(cnt>=b[i])
           {
               cnt=cnt-b[i];
             for(int j=0;j<i;j++)
             {
                 if(c[j]>=b[i])
                 {
                     c[j]=c[j]-b[i];
                     b[j]=b[j]+b[i];
                     b[i]=0;
                     break;
                 }
                 else if(c[j]<b[i])
                 {
                     b[i]=b[i]-c[j];
                     c[j]=0;
                     b[j]=b[j]+c[j];
                     if(b[i]==0)
                        break;
                 }
             }
           }
           else if(cnt<b[i])
           {
               b[i]=b[i]-cnt;
           }
       }
       for(int i=n-1;i>=0;i--)
       {
           if(b[i]!=0)
           {
               printf("%d\n",i);
               break;
           }
           if(i==0)
           {
               printf("0\n");
           }
       }
}
}
