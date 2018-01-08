#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[101],dp[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(int i=1;i<=k;i++)
            scanf("%d",&a[i]);
              for(int j=1;j<=k;j++)
              {
            dp[j]=a[j];
              }
              for(int s=2;s<=k;s++)
                {
                    for(int q=1;q<s;q++)
                    {
                        if(a[s-q] == -1  || dp[q] == -1)
                      continue;
                       if(dp[s] == -1)
                      dp[s] = dp[q] + a[s-q];
                        else
                    dp[s]=min(dp[s],dp[q]+a[s-q]);
                }
    }
    if(k==0)
        printf("0");
    else
        printf("%d\n",dp[k]);
}
}
