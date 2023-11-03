#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    long long total;
    while(t--)
    {
        scanf("%d",&n);
        total = (long long)n * (n + 1) / 2;
        printf("%lld\n",total);
    }
    return 0;
}
