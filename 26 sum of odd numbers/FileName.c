#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int m, n, x = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            x += i;
        }
    }
    printf("%d", x);
    return 0;
}