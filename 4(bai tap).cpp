#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{

    return 0;
}

// bai 1
//  int a, b;
//  cin >> a >> b;
//  if (b != 0)
//  {
//      int phannguyen = a / b;
//      float du =a % b;
//      cout << phannguyen << " " << du << endl;
//  }
//  else
//  {
//      cout << "mau phai khac khong \n";
//  }

// bai 2
//  long long x;
//  cin >> x;
//  if ((0 < x) && (x <= 10000))
//  {
//      long long kq = pow(x, 3) + 3 * pow(x, 2) + x + 1;
//      cout << kq << endl;
//  }
//  else
//  {
//      cout << "gia tri nhap vao khong dung \n";
//  }

// bai 3
//  long long a, b, c;
//  cin >> a >> b >> c;
//  long long res = a * (b + c) + b * (a + c);
//  cout << res << endl;

// bai 4
//  long long a, b;
//      // cin >> a >> b;
//      // long long tong = a + b;
//      // long long hieu = a - b;
//      // long long tich = a * b;
//      // double thuong = 1.0 * a / b;
//      // cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl;

// bai 5
//  long long r;
//  cin >> r;
//  double chuvi = 2 * 3.14159 * r, dientich = 3.14159 * pow(r, 2);
//  cout << fixed << setprecision(2) << chuvi << " " << fixed << setprecision(2) << dientich << endl;

// bai 6
// int a, b, c, d;
// cin >> a >> b >> c >> d;
// float kc = 1.0 * sqrt(pow(c - a, 2) + pow(d - b, 2));
// cout << fixed << setprecision(2) << kc << endl;

// bai 7
// int C;
// cin >> C;
// float F =  ( 1.0 * C * 9 / 5 + 32);
// cout << fixed << setprecision(2) << F << endl;

// bai 8
// long long x;
//     cin >> x;
//     long long S = (1ll * 2 * 1 + x - 1) * x / 2;
//     cout << S;

// bai 9
// int x;
// cin >> x;
// long long S = 1ll * x * (x + 1) * (2 * x + 1) / 6;
// cout << S;

// bai 10
// long long x;
// cin >> x;
// double S = 1 -  1.0 / (x - 1);
// cout << fixed << setprecision(2) << S;

// bai 11
// long long x;
// cin >> x;
// long long S = 2 * (1ll * 2 * 1 + x - 1) * x / 2;
// cout << S;
// return 0;

// bai 12
// long long x;
// cin >> x;
// if (x % 2 == 0)
// {
//     long long th1 = x / 2;
//     cout << th1 << endl;
// }
// else
// {
//     double th2 = 1.0 * (x - 1) / 2 - x;
//     cout << th2 << endl;
// }

// bai 13
// int a, b;
// cin >> a >> b;
// cout << a / b * b;

// bai 14
// int a, b;
// cin >> a >> b;
// if (a % b == 0)
// {
//     cout << a / b * b << endl;
// }
// else
// {
//     cout << (a / b + 1) * b << endl;
// }
// hoac la cout << (a + b -1)/ b * b << endl;

// bai 15
// long long n;
// cin >> n;
// bool cc = ((n % 3 == 0) && (n % 5 == 0));
// if (cc)
// {
//     cout << "1" << endl;
// }
// else
// {
//     cout << "0";
// }

// bai 16
// int a;
// cin >> a;
// if ((a % 4 == 0) && (a % 100 != 0))
// {
//     cout << "YES" << endl;
// }
// else if (a <= 0)
// {
//     cout << "INVALID" << endl;
// }
// else
// {
//     cout << "NO " << endl;
// }

// bai 17
// int t, n;
// cin >> t >> n;
// if ((t < 1) || (t > 12) || (n))
// {
//     cout << "INVALID" << endl;
// }
// else
// {
//     if ((t == 1) || (t == 3) || (t == 5) || (t == 7) || (t == 8) || (t == 10) || (t == 12))
//     {
//         cout << "31" << endl;
//     }
//     else if ((t == 4) || (t == 6) || (t == 9) || (t == 11))
//     {
//         cout << "30" << endl;
//     }
//     else
//     {
//         if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
//         {
//             cout << "29" << endl;
//         }
//         else
//         {
//             cout << "28" << endl;
//         }
//     }
// }

// bai 18
// char a;
// cin >> a;
// if ((a >= 97) && (a <= 122))
// {
//     cout << "YES \n";
// }
// else
// {
//     cout << "NO \n";
// }

// bai 19
// char a;
// cin >> a;
// if ((a >= 65) && (a <= 90))
// {
//     cout << "YES \n";
// }
// else
// {
//     cout << "NO \n";
// }

// bai 20
// char a;
// cin >> a;
// if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
// {
//     cout << "YES \n";
// }
// else
// {
//     cout << "NO";
// }

// bai 21
// char a;
// cin >> a;
// if ((a >= 48) && (a <= 57))
// {
//     cout << "YES \n";
// }
// else
// {
//     cout << "NO \n";
// }

// bai 22
// char a;
// cin >> a;
// if ((a >= 'A') && (a <= 'Z'))
// {
//     a = a + 32;
// }
// cout << a;

// bai 23
// char a;
// cin >> a;
// if ((a >= 97) && (a <= 122))
// {
//     a = a - 32;
// }
// cout << a;

// bai 24
// char x;
// cin >> x;
// if (((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z')))
// {
//     if ((x == 'z') || (x == 'z'))
//     {
//         cout << "a\n";
//     }
//     else
//     {
//         if ((x >= 'A') && (x <= 'Z'))
//         {
//             x = x + 32;
//         }
//         ++x;
//         cout << x << endl;
//     }
// }
// else
// {
//     cout << "INVALID";
// }

// bai 25
// int a, b, c;
// cin >> a >> b >> c;
// if ((a + b > c) && (a + c > b) && (b + c > a) && (a >0) & (b > 0) & (c > 0))
// {
//     cout << "YES\n";
// }
// else
// {
//     cout << "NO";
// }

//  btt1
// int a, b, c;
// cin >> a >> b >> c;
// int max, min;
// if ((a > b) && (a > c))
// {
//     max = a;
// }
// else if ((b > a) && (b > c))
// {
//     max = b;
// }
// else if ((c > b) && (c > a))
// {
//     max = c;
// }
// if ((a < b) && (a < c))
// {
//     min = a;
// }
// else if ((b < a) && (b < c))
// {
//     min = b;
// }
// else if ((c < b) && (c < a))
// {
//     min = c;
// }
// cout << max << " " << min;

// btt1 (cach 2)
// int a, b, c; cin >> a >> b >> c;
// int max = a, min = a;
// if (b < min ) min = b;
// if (c < min ) min = c;
// if (b > max ) max = b;
// if (c > max ) max = c;
// cout << max << " " << min << endl;

// bai 26
// long long a, b, c;
// cin >> a >> b >> c;
// if (((a + b > c) && (a + c > b) && (b + c > a)) && ((a > 0) && (b > 0) && (c > 0)))
// {
//     if ((a == b) && (b == c))
//     {
//         cout << "1";
//     }
//     else if ((a == b) || (a == c) || (b == c))
//     {
//         if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
//         {
//             cout << "5"; // 5 : vuong can
//         }
//         else
//         {
//             cout << "2";
//         }
//     }
//     else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
//     {
//         cout << "3";
//     }
//     else
//     {
//         cout << "4";
//     }
// }
// else
// {
//     cout << "INVALID";
// }

// bai 27
// int n;
// cin >> n;
// int nam = n / 365;
// int tuan = (n % 365) / 7;
// int ngay = (n % 365) % 7;
// cout << nam << " " << tuan << " " << ngay << endl;

// bai 28
// int a, b, c;
// cin >> a >> b >> c;
// if (a == 0)
// {
//     if ((b == 0) && (c == 0))
//     {
//         cout << "INF" << endl;
//     }
//     else if ((b == 0) && (c != 0))
//     {
//         cout << "NO" << endl;
//     }
//     else if (b != 0)
//     {
//         cout << fixed << setprecision(2) << (float)-c / b;
//     }
// }
// else
// {
//     int delta = 1.0 * b * b - 4 * a * c;
//     if (delta < 0)
//     {
//         cout << "NO";
//     }
//     else if (delta == 0)
//     {
//         cout << fixed << setprecision(2) << (float)-b / 2 * a;
//     }
//     else
//     {
//         float x1 = (-b - 1.0 * sqrt(delta)) / (2 * a);
//         float x2 = (-b + 1.0 * sqrt(delta)) / (2 * a);
//         cout << fixed << setprecision(2) << x1 << " " << x2;
//     }
// }

// bai 29
// float a, b;
// cin >> a >> b;
// int A = int(a);
// int B = int(b);
// if (a > A)
// {
//     A += 1;
// }
// else
// {
//     A;
// }
// if (A < B)
// {
//     cout << B - A + 1;
// }
// else
// {
//     cout << 0;
// }

// bai 30
// long long a, b, c;
// cin >> a >> b >> c;
// if ((a / b == c) || (b / c == a) || (c / a == b))
// {
//     cout << "/";
// }
// else
// {
//     cout << "NOSOL";
// }

// bai 31
// float a, b, c, d;
// cin >> a >> b >> c >> d;
// float tk = 1.0 * (a + b + c * 2+ d * 3) / 7;
// if (tk >= 8)
// {
//     cout << "GIOI";
// }
// else if (/*(tk < 8)&& */ (tk >= 6.5))
// {
//     cout << "KHA";
// }
// else if (/*(tk < 6.5) &&*/ (tk >= 5))
// {
//     cout << "TRUNG BINH";
// }
// else
// {
//     cout << "YEU";
// }

// bai 32
// long long a, b, c, d, e;
// cin >> a >> b >> c >> d >> e;
// long long min1 = a;
// long long min2;
// if (b < min1)
//     min1 = b;
// if (c < min1)
//     min1 = c;
// if (d < min1)
//     min1 = d;
// if (e < min1)
//     min1 = e;

// if (a != min1)
//     min2 = a;
// else
//     min2 = b;

// if (( &a != min1)& (a < min2))
//     min2 = a;
// if ((b != min1) && (b < min2))
//     min2 = b;
// if ((c != min1) && (c < min2))
//     min2 = c;
// if ((d != min1) && (d < min2))
//     min2 = d;
// if ((e != min1) && (e < min2))
//     min2 = e;
// cout << min2;
