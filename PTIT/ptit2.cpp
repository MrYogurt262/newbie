#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        long long a;
        cin >> a;
        long long sq = sqrt(a);
        if (sq * sq == a)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        --n;
    }
    return 0;
}

// bai 1
// int a, b, c, d;
// cin >> a >> b >> c >> d;
// int Max = a;
// if (b > Max)
//     Max = b;
// if (c > Max)
//     Max = c;
// if (d > Max)
//     Max = d;
// cout << Max;

// bai 3
// int r;
// cin >> r;
// double dientich = 3.14 * r * r;
// cout << dientich;

// bai 4

// bai 5
// int a,b,c,d,e ;
// cin >> a >> b >> c >> d >> e;
// cout << 1.0 * (a + b + c + d + e)/ 5 ;

// bai 6
// int a,b,c,d,e,f;
// cin >> a >> b >> c >> d >> e >> f;
// cout << 1.0 * (a + b + c + d + e + f)/ 6;

// bai 1.1
// int a;
// cin >> a;
// cout << a;

// bai 1.2
// int a, b;
// cin >> a >> b;
// cout << a + b;

// bai 1.3
// int a;
// cin >> a;
// cout << a * 3;

// bai 1.4
// int a,b;
// cin >> a >> b;
// cout << a * b;

// bai 1.5
// long long a, b, c;
// cin >> a >> b >> c;
// long long S = a * (b + c) + b * (a + c) ;
// cout << S;

//  bai 2 (hoi nhieu truong hop nen em van dang nghi)
// int a, b, c;
// cin >> a >> b >> c;
// float p = 1.0 * (a + b + c) / 2 if ((a + b > c) && (b + c > a) && (a + c > b) && (a > 0) && (b > 0) && (c > 0))
// {
//     if ((a == b) && (b == c))
//     {
//         cout << 1.0 * 1 / 2 * a * sqrt(b * b - (a * a / 4))
//     }
// }

// bai ??
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     int b;
//     cin >> b;
//     cout << b * 2 << endl;
// }

// bai 15
// long long n;
// cin >> n;
// for (int i = 1; i <= 10; i++)
// {
//     cout << n * i << " ";
// }