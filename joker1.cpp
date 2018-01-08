#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
    int t,n,i,p;
    long long int ans;
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        ans=1;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<=i)
            {
                p=1;
                break;
            }
            else
                ans=(ans%m*(a[i]-i)%m)%m;
        }
        if(p==1)
            printf("0\n");
        else
        printf("%lld\n",ans);
    }
     printf("KILL BATMAN\n");
}
