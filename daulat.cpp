#include <bits/stdc++.h>
using namespace std;
#define x 1000000007
#define m 1000000006
void multiply(long long int F[2][2],long long int M[2][2]);
void power(long long int F[2][2],long long int n);
long long int powerf(long long int a,long long int b)
{
    if(b==0)
        return 1;
    long long p=powerf(a,b/2);
    if(b%2==1)
    return (((p%x)*(p%x))%x*(a%x))%x;
    else
     return (p%x*p%x)%x;
}
long long int fib(long long int n)
{
long long int F[2][2] = {{1,1},{1,0}};
if (n == 0)
return 0;
power(F, n-1);
return (F[0][0])%m;
}
void power(long long int F[2][2], long long int n)
{
if( n == 0 || n == 1)
return;
long long int M[2][2] = {{1,1},{1,0}};
power(F, n/2);
multiply(F, F);
if (n%2 != 0)
multiply(F, M);
}
void multiply(long long int F[2][2],long long int M[2][2])
{
long long int u = ((F[0][0]%m*M[0][0]%m)%m + (F[0][1]%m*M[1][0]%m)%m)%m;
long long int y = ((F[0][0]%m*M[0][1]%m)%m + (F[0][1]%m*M[1][1]%m)%m)%m;
long long int z = ((F[1][0]%m*M[0][0]%m)%m + (F[1][1]%m*M[1][0]%m)%m)%m;
long long int w = ((F[1][0]%m*M[0][1]%m)%m + (F[1][1]%m*M[1][1]%m)%m)%m;
F[0][0] = u;
F[0][1] = y;
F[1][0] = z;
F[1][1] = w;
}
int main()
{
     long long int a,b,n;
    long long int ans1,ans2,ans3,ans4;
    int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lld %lld %lld",&a,&b,&n);
    if(n==0)
    printf("%lld\n",a);
    else if(n==1)
        printf("%lld\n",b);
    else
    {
   ans1=fib(n-1)%m;
   ans2=fib(n)%m;
   ans3=(powerf(a+1,ans1))%x;
   ans4=(powerf(b+1,ans2))%x;
  printf("%lld\n",((ans3%x*ans4%x)%x-1+x)%x);
    }
}
return 0;
}
