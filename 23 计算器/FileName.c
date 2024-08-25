#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a, b;
    char c;
    scanf("%f %f %c", &a, &b, &c);
    switch (c)
    {
    case '+': printf("%.0f", a + b); break;
    case '-': printf("%.1f", a - b); break;
    case '*': printf("%f", a * b); break;
    case '/':
    {
        if (b == 0) printf("Divided by zero!");
        else printf("%f", a / b);
        break;
    }
    default: printf("Invalid operator!"); break;
    }
    return 0;
}