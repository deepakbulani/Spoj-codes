#include<bits/stdc++.h>
using namespace std;
int x[5];
/*nqueens for 4x4 matrix*/
int issafe(int row,int col)
{
    for(int i=1;i<=row-1;i++)
    {
        if(x[i]==col)
            return 0;
    }
    for(int i=1;i<=row-1;i++)
    {
        if(abs(i-row)==abs(x[i]-col))
            return 0;
    }
    return 1;
}
int solvenqueens(int row)
{
    if(row>4)
    {
        for(int i=1;i<=4;i++)
        {
            printf("%d %d\n",i,x[i]);
        }
       // return 1;//on uncommenting only one path will be printed elsewise it prints all ways
    }
    for(int col=1;col<=4;col++)
    {
        if(issafe(row,col))
        {
            x[row]=col;
           int sol=solvenqueens(row+1);
            if(sol)
                return sol;
            //x[row]=col;//no effect on uncommenting
        }
    }
    return 0;
}
int main()
{
    solvenqueens(1);
}
