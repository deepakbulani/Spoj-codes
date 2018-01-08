#include<bits/stdc++.h>
using namespace std;
int r,c;
int res=0;
 int mark[52][52];
int p[]={-1,-1,-1,0,0,1,1,1};
int q[]={-1,0,1,-1,1,-1,0,1};
int dfs(char a[52][52],int x,int y, int cnt)
{
    int i;
    res=max(res,cnt);
    for(i=0;i<8;i++)
    {
            if(x+p[i]>=0 && x+p[i]<r && y+q[i]>=0 && y+q[i]<c && mark[x+p[i]][y+q[i]]==0)
            {
                if(a[x+p[i]][y+q[i]] == (a[x][y]+1))
                {
                    mark[x+p[i]][y+q[i]]=1;
                    dfs(a,x+p[i],y+q[i],cnt+1);
                }
            }
        }
    }
int main()
{
    int i,j,t;
    char a[52][52];
    t=1;
     while(cin>>r && r>0 && cin>>c && c>0)
     {
         res=0;
         if(r==0)
            break;
         for(i=0;i<r;i++)
         {
             string s;
             cin>>s ;
             for(j=0;j<s.length();j++)
             {
                a[i][j] = s[j];
                mark[i][j]=0;
             }
         }
         for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
                {
                    if(a[i][j]=='A')
                    {
                        mark[i][j]=1;
                        dfs(a,i,j,1);
                    }
                }
         }
          printf("Case %d: %d\n",t,res);
          t++;
     }
}
