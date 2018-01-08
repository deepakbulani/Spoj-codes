#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,c,d,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&c,&d,&l);
        if(c==0&&d==0)
        {
            if(l==0)
            {
            printf("yes\n");
            continue;
            }
            else
            {
                printf("no\n");
            continue;
            }
        }
        b=4*c+4*d;
        if((c-2*d)>=0)
            a=(4*d)+(c-2*d)*4;
        else
            a=4*d;
        for(i=a;i<=b;i=i+4)
        {
            if(l==i)
            {
                printf("yes\n");
                break;
            }
            if(i==b)
            {
                printf("no\n");
                break;
            }
        }
    }
}
