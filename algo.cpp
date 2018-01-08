#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,g,cnt;
    scanf("%d",&t);
   while(t--)
   {
       cnt=0;
      scanf("%d %d %d",&n,&r,&g);
      if(g>=n)
      {
         cnt++;
          g=g-n;
          cnt=cnt+g;
          cnt=cnt+r;
      }
      else if(g<n)
      {
          r=r+g-n;
          cnt++;
          cnt=cnt+r;

      }
      printf("%d\n",cnt);
   }
}
