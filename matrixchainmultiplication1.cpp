#include<bits/stdc++.h>
using namespace std;
int a[5][5];
int b[5][5];/*bracket matrix with help of which we would print brackets*/
int p[5];
/* dp code for matrix chain multiplication taking 4 matrices complexity O(n^3)*/
/*function to print brackets*/
void printbracket(int i,int j)
{
    if(i==j)
        printf("%c",i+64);
    else
    {
        printf("(");
        printbracket(i,b[i][j]);
        printbracket(b[i][j]+1,j);
        printf(")");
    }
}
int recursive(int i,int j)
{
    if(a[i][j])
    return a[i][j];
    if(i==j)
    return a[i][j]=0;
    a[i][j]=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
      int q=recursive(i,k)+recursive(k+1,j)+p[i-1]*p[k]*p[j];
        if(a[i][j]>q)
        {
            a[i][j]=q;
            b[i][j]=k;
        }
    }
    return a[i][j];
}
int main()
{
    for(int i=1;i<=4;i++)
    {
    a[i][i]=0;
    b[i][i]=0;
    }
    printf("enter the dimension array\n");
    for(int i=0;i<5;i++)
        scanf("%d",&p[i]);
    int ans=recursive(1,4);
    printf("%d\n",ans);
    printbracket(1,4);
    printf("\n");
}
