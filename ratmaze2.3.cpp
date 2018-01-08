#include<bits/stdc++.h>
using namespace std;
int p[] ={0,-1,0,1};
int q[] ={-1,0,1,0};
 int a[5][5];
 int vis[5][5];
 /*printing shortest path in rat maze problem*/
 vector<int> v;
 int cnt=0;
 int sol;
 int ratmaze(int x,int y)
 {
     if(x==4&&y==4)
     {
        cnt++;
         for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",vis[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    v.push_back(vis[x][y]);
     }
     for(int i=0;i<4;i++)
     {
         int r=x+p[i];
         int s=y+q[i];
         if(r>=0&&r<5&&s>=0&&s<5&&a[r][s]==1&&vis[r][s]==0)
         {
             vis[r][s]=vis[x][y]+1;
           ratmaze(r,s);//if we write int sol=ratmaze(r,s) and dont give return 0 at end then recursion will terminate without calling
           //its parent and only 0 4 and 0 will be printed.check yourself
         }
         if(sol)
         {
          return sol;//on uncommenting cnt will be printed 1 as for the one path true will be returned to all calling function
         //on putting print here and uncommenting above one path will be printed
         }
     }
     vis[x][y]=0;
     //printf("%d %d\n",x,y);
 }
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    vis[0][0]=1;
     ratmaze(0,0);
     sort(v.begin(),v.end());
     printf("%d\n",v[0]-1);
     printf("%d\n",cnt);
}
