#include<bits/stdc++.h>
using namespace std;
int a[100001];
int fun(int x,int c,int n)
{
    int curpos=a[0];
    int cow=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]-curpos>=x)
        {
            curpos=a[i];
            cow++;
            if(cow==c)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int t,n,c,start,end,mid,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=-1;
        scanf("%d %d",&n,&c);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        start=0;
        end=a[n-1];
        while(start<end)
        {
             mid=start+(end-start)/2;
            if(fun(mid,c,n))
            {
                if(ans<mid)
                    ans=mid;
                start=mid+1;
            }
            else
            {
              end=mid;
            }
        }
        printf("%d\n",ans);
    }
}
