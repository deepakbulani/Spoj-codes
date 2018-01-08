#include<bits/stdc++.h>
using namespace std;
long long int stir(long long int n,long long int m)
{
    if(n==0&&m==0)
        return 1;
    else if((m==0)&&(n>0))
    return 0;
    else if((n==0)&&(m>0))
        return 0;
    else if((n>0)&&(m>0))
        return  (((m%2)*(stir(n-1,m)%2)%2) + (stir(n-1,m-1)%2))%2;
}
int main()
{
    int t;
    long long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",stir(n,m)%2);
    }
}
