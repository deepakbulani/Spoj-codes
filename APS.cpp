#include<bits/stdc++.h>
using namespace std;
long long int a[10000009];
long long int b[10000009];
void fun()
{
    for(int i=2;i<=10000000;i++)
    {
        if(b[i]==0)
        {
          b[i]=i;
          for(int j=i+i;j<=10000000;j=j+i)
          {
              if(b[j]==0)
                b[j]=i;
          }
          a[i]=a[i-1]+i;
        }
        else
            a[i]=a[i-1]+b[i];
    }
}
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    fun();
    while(t--)
    {
        scanf("%lld",&n);
          printf("%lld\n",a[n]);
    }
}
