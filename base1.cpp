#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,i,m,cnt;
    float a,b;
     scanf("%d",&t);
     while(t--)
     {
         cnt=0;
         scanf("%lld",&n);
        for(m=1;m<=log2(n);m++)
         {
        a=pow(n,(float)1/m);
         b=pow((n+1)/2.0,(float)1/m);
        if(pow(a+1,m)<=n)
            a=a+1;
        if(pow(b-1,m)>=(n+1)/2.0)
            b=b-1;
            cnt=cnt+(floor(a)-ceil(b)+1);
         }
         if(n==1)
            printf("INFINITY\n");
        else if(n==0)
                printf("0\n");
         else
       printf("%lld\n",cnt);
     }
}
