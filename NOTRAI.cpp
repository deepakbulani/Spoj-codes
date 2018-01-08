#include<bits/stdc++.h>
using namespace std;
int a[2002];
int n;
int cnt=0;
void fun(int tot,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=tot)
        {
            low=mid+1;
        }
        else if(a[mid]>tot)
          {
             cnt=cnt+(high-mid+1);
            high=mid-1;
          }
    }
}
int main()
{
while(1)
{
    cnt=0;
    scanf("%d",&n);
    if(n==0)
        break;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            fun(a[i]+a[j],0,n-1);
        }
    }
    printf("%d\n",cnt);
}
}
