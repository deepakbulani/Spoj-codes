#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[501],b[501];
    int l,ptr;
    int cnt;
     while(2)
     {
         cnt=0;
         scanf("%s %s",a,b);
         if(a[0]=='*')
            break;
        l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i+1]==b[i+1])
                {
                    cnt++;
                }
                else
                    continue;
            }
            if(a[i]==b[i])
                continue;
        }
        printf("%d\n",cnt);
     }
}
