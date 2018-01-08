#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char b[100000];
    long long int n,a[100000],sum;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++)
            scanf("%s %lld",b,&a[i]);
            sort(a,a+n);
         for(int j=0;j<n;j++)
         sum=sum+abs(a[j]-(j+1));
         printf("%lld\n",sum);
    }
}
