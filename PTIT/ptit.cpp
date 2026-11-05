#include <stdio.h>
#include <math.h>
int main()
{

    return 0;
}

/*
int : %d
long long : %lld
float : %f
double : %lf
char : %c
*/

// bai 14
// double a, b, c;
// scanf("%lf %lf %lf", &a, &b, &c);
// if ((a == 0) && (b == 0))
// {
//     printf("NO");
// }
// else if (a == 0)
// {
//     printf("%.2lf", 1.0 * -c / b);
// }
// else
// {
//     double denta = b * b - 4 * a * c;
//     if (denta < 0)
//     {
//         printf("NO");
//     }
//     else if (denta == 0)
//     {
//         printf("%.2lf", -b / (2.0 * a));
//     }
//     else if (denta > 0)
//     {
//         double x1 = 1.0 * (-b + sqrt(denta)) / (2 * a);
//         double x2 = 1.0 * (-b - sqrt(denta)) / (2 * a);
//         if (x1 > x2)
//         {
//             printf("%.2lf %.2lf", x1, x2);
//         }
//         else
//         {
//             printf("%.2lf %.2lf", x2, x1);
//         }
//     }
// }

// bai 16
// int n;
// scanf("%d", &n);
// while (n != 0)
// {
//     long long a;
//     scanf("%lld", &a);
//     long long sq = sqrt(a);
//     if (sq * sq == a)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     --n;
// }

// bai 17
// int n;
// scanf("%d", &n);
// while (n > 0)
// {
//     long long tong = 0;
//     long long a;
//     scanf("%lld", &a);
//     if (a == 0)
//     {
//         tong += 1;
//         printf("%lld\n", tong);
//     }
//     else
//     {
//         while (a != 0)
//         {
//             tong += (a % 10);
//             a /= 10;
//         }
//         printf("%lld\n", tong);
//         --n;
//     }
// }
