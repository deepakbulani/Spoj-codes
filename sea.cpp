#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,m,l,r,cnt,k;
    int b[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<m;j++)
        {
            memset(b,0,sizeof(b));
            cnt=0;
            scanf("%d %d",&l,&r);
            for(k=l-1;k<r-1;k++)
            {
                if(a[k]<a[k+1])
                {
                    b[cnt]++;
                }
                    else
                    {
                        cnt++;
                    }
            }
            sort(b+0,b+(cnt+1));
            printf("%d\n",b[cnt]+1);
        }
    }
}

