#include<stdio.h>
void fun(int a[])
{
    int j;
    for(j=0;j<10;j++)
        a[j]=0;
}
int main()
{
    int i;
int a[10];
for(i=0;i<10;i++)
        scanf("%d",&a[i]);
fun(a);
for(i=0;i<10;i++)
    printf("%d ",a[i]);
}
