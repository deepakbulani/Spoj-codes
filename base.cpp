#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     int n,cnt,x,i;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            x=n;
            while(x>0)
            {
                x=x/i;
                if(x<i)
                    break;
            }
            if(x==1)
                cnt++;
        }
        if(n==1)
            printf("INFINITY\n");
        else
        printf("%d\n",cnt);
    }
}
