#include<bits/stdc++.h>
using namespace std;
struct box
{
    int height,breadth,length;
};
int cmp(box q,box t)
{
    return (q.length*q.breadth)>(t.length*t.breadth);
}
int fun(box a[],int n)
{
    box p[3*n];
    int index=0;
    for(int i=0;i<n;i++)
    {
        p[index]=a[i];
        index++;
        p[index].height=a[i].length;
        p[index].length=max(a[i].breadth,a[i].height);
        p[index].breadth=min(a[i].breadth,a[i].height);
         index++;
        p[index].height=a[i].breadth;
        p[index].length=max(a[i].length,a[i].height);
        p[index].breadth=min(a[i].length,a[i].height);
        index++;
    }
    sort(p,p+(3*n),cmp);
    int ans[3*n];
    for(int i=0;i<3*n;i++)
        {
            ans[i]=p[i].height;
        }
    for(int i=1;i<3*n;i++)
    {
      for(int j=0;j<i;j++)
      {
          if((p[i].length<p[j].length)&&(p[i].breadth<p[j].breadth)&&(ans[i]<(ans[j]+p[i].height)))
          {
            ans[i]=ans[j]+p[i].height;
          }
      }
    }
    int fans=INT_MIN;
    for(int i=0;i<3*n;i++)
        cout<<ans[i]<<endl;
    return fans;
}
int main()
{
    int n;
    scanf("%d",&n);
    box a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i].height,&a[i].breadth,&a[i].length);
    }
    printf("%d\n",fun(a,n));
}
