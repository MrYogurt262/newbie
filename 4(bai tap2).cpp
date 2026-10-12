#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        cout << a * k / 2 - b * k / 2;
    }
    else
    {
        cout << a * (k / 2 + 1) - b * (k / 2);
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
