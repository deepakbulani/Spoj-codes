#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,l,c,d;
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
            a=4*d+4*(c-2*d);
        else
            a=4*d;
        if((l>=a)&&(l<=b)&&(l%4==0))
            printf("yes\n");
        else
            printf("no\n");
    }
}

