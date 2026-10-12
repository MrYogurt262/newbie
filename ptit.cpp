#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld", &a);
    scanf("%lld %lld", &b, &c);
    printf("%lld %lld", b * 2, c * 2);
    return 0;
}

// cau 1
// int a;
// scanf("%d", &a);
// printf("%d\n", a * 2);