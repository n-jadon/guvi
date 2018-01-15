#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long f = 1;

    scanf("%d",&n);

    if (n < 0)
        printf("Error!");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f *= i;
        }
        printf("%llu",f);
    }

    return 0;
}