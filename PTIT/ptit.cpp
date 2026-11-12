#include <stdio.h>
#include <math.h>
int main()
{

    // int t;
    //     scanf("%d", &t);

    //     for (int i = 0; i < t; i++) {
    //         long long n;
    //         scanf("%lld", &n);

    //         int nguyento = 1;

    //         if (n < 2) {
    //             nguyento = 0;
    //         } else {
    //             for (long long j = 2; j * j <= n; j++) {
    //                 if (n % j == 0) {
    //                     nguyento = 0;
    //                     break;
    //                 }
    //             }
    //         }

    //         if (nguyento == 1) {
    //             printf("YES\n");
    //         } else {
    //             printf("NO\n");
    //         }
    //     }

    // int x1, y1, x2, y2;
    // int x3, y3, x4, y4;

    // scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    // scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    // int minX = x1;
    // if (x3 < minX) minX = x3;

    // int maxX = x2;
    // if (x4 > maxX) maxX = x4;

    // int minY = y1;
    // if (y3 < minY) minY = y3;

    // int maxY = y2;
    // if (y4 > maxY) maxY = y4;

    // int rong = maxX - minX;
    // int cao = maxY - minY;

    // int canh = rong;
    // if (cao > canh) canh = cao;

    // printf("%d", canh * canh);

    // long long n;
    // scanf("%lld", &n);
    // long long T = 0;
    // for (long long i = 1; i * i  < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         T += i;
    //     }
    // }
    // if (T <= n)
    // {
    //     printf("1");
    // }
    // else
    // {
    //     printf("0");
    // }

    // long long m, n;
    // scanf("%lld %lld", &m, &n);
    // int T = 0;
    // for (long long i = m; i <= n; i++)
    // {
    //     int CB = sqrt(i);
    //     if (CB * CB == i)
    //     {
    //         T++;
    //     }
    // }
    // printf("%d\n", T);

    // for (long long i = m; i <= n; i++)
    // {
    //     int CB = sqrt(i);
    //     if (CB * CB == i)
    //     {
    //         printf("%lld\n", i);
    //     }
    // }
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

// web 2
// int x;
// scanf("%d", &x);
// while (x > 0)
// {
//     long long n;
//     scanf("%lld", &n);
//     int sc = n % 10;

//     while (n >= 10)
//     {
//         n /= 10;
//     }
//     int sd = n;
//     if (sd == sc)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     x--;
// }

// web 10 (bai 10)
// long long n;
// scanf("%lld", &n);
// long long T = 1;
// while (n > 0)
// {
//     T *= (n % 10);
//     n /= 10;
// }
// printf("%lld", T);

// web 11 (bai 11)
// int a, b;
// scanf("%d%d", &a, &b);
// long long T = 0;
// long long S = abs(a - b);
// for (int i = 0; i <= S; i++)
// {
//     if (a < b)
//     {
//         T += a;
//         a++;
//     }
//     else
//     {
//         T += a;
//         a--;
//     }
// }
// printf("%lld", T);

// web 13 (bai 13)
// long long n;
// scanf("%lld", &n);
// int S = 0;
// while (n > 0)
// {
//     S++;
//     n /= 10;
// }
// printf("%d", S);

// web 17 (bai 17)
// long long x;
// scanf("%lld", &x);
// int sc = x % 10;
// while (x >= 10)
// {
//     int sd = x / 10;
//     x /= 10;
// }
// int sd = x;
// printf("%d %d", sd, sc);
