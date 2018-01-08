#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
typedef long long ll;
ll a[MAX];

int main()
{
    int i, l, test, start;
    ll sum, min_sum, st, max_st;
    ll A, B;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%lld %lld",&A,&B);
        for(i=1; i<=A; i++)
        {
             scanf("%lld", &a[i]);
        }
        min_sum = 50000;
        start = 1;
        max_st = 0;
        st=0;
        sum = 0;
        for(i=1; i<=A; i++)
        {
            sum = sum + a[i];
            st = st + 1;
            if((max_st < st && sum <=B) || (max_st == st && min_sum > sum))
            {
                max_st = st;
                min_sum = sum;
            }
            while(sum>B)
            {
                sum = sum - a[start];
                st = st-1;
                start++;
            }
            if ((max_st < st && sum <=B) || (max_st == st && min_sum > sum))
            {
                max_st = st;
                min_sum = sum;
            }
        }
        printf("%lld %lld\n", min_sum, max_st);
    }
}

