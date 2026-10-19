#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 100 == 0)
    {
        cout << n / 100;
    }
    else
    {
        cout << n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + ((((n % 100) % 20) % 10) % 5) / 1;
    }

    return 0;
}

// bai 1
// int a, b, c;
// cin >> a >> b >> c;
// int canh1 = sqrt((1.0 * a * c) / b);
// int canh2 = sqrt((1.0 * b * c) / a);
// int canh3 = sqrt((1.0 * a * b) / c);
// cout << 4 * (canh1 + canh2 + canh3);

// bai 1 (c2)
// int a, b, c;
// cin >> a >> b >> c;
// for (int x = 1; x <= 100; x++)
// {
//     if ((a % x == 0) && (c % x == 0))
//     {
//         int y = a / x;
//         int z = c / x;
//         if (y * z == b)
//         {
//             cout << 4 * (x + y + z);
//             break;
//         }
//     }
// }

// bai 2
// int M, N;
// cin >> M >> N;
// int amt = M * N / 2;
// cout << amt;

// bai 3
// long long a, b, c;
// cin >> a >> b >> c;
// long long shd = (a + c - 1) / c;
// long long shn = (b + c - 1) / c;
// cout << shd * shn;

// bai 4
// long long a, b, k;
// cin >> a >> b >> k;
// if (k % 2 == 0)
// {
//     cout << a * k / 2 - b * k / 2;
// }
// else
// {
//     cout << a * (k / 2 + 1) - b * (k / 2);
// }

// bai 5(c1)
// long long a, b, s;
// cin >> a >> b >> s;
// if (abs(a) + abs(b) <= s)
// {
//     if ((((abs(a) + abs(b)) % 2 == 0) && (s % 2 == 0)) || ((abs(a) + abs(b)) % 2 !=0)&& (s % 2 != 0))
//     {
//         cout << "Yes";
//     }
//     else if (abs(a) + abs(b) == s)
//     {
//         cout << "Yes";
//     }
//     else
//     {
//         cout << "No";
//     }
// }
// else
// {
//     cout << "No";
// }

// bai 5 (c2)
// long long a, b, s;
// cin >> a >> b >> s;
// long long tong = abs(a) + abs(b);
// if ((tong <= s) && ((s - tong) % 2 == 0))
// {
//     cout << "Yes";
// }
// else
// {
//     cout << "No";
// }

// bai 6
// int a, b;
// long long n;
// cin >> n >> a >> b;
// if (2 * a <= b)
// {
//     cout << n * a;
// }
// if (2 * a > b)
// {
//     cout << n / 2 * b;
// }

// bai 7
// int n;
// long long s;
// cin >> n >> s;
// int SDX = (s + n -1) / n ;
// cout << SDX;

// bai 8
