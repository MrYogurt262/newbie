#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long s = 0;
    for (long long i = 1; i <= n; i++)
    {
        s += 2 * i;
    }
    cout << s;
    return 0;
}

// b1
// long long  n;
// cin >> n;
// long long  S = 0;
// while (n > 0)
// {
//     S += n;
//     n--;
// }
// cout << S;

// b2
// long long n;
// cin >> n;
// long long S = 0;
// for (int i = 0; i <= n; i++)
// {
//     S += i * i;
// }
// cout << S;

// b3
// long long n;
// cin >> n;
// long long S = 0;
// for (int i = 0; i <= n; i += 3)
// {
//     S += i;
// }
// cout << S;

// b4
// long long n;
// cin >> n;
// double S = 0;
// for (long long  i = 1; i <= n; i++)
// {
//     S += ((double)1 / i);
// }
// cout << fixed << setprecision(3) << S;

// b5
// long long n;
// cin >> n;
// double s = 0;
// for (long long i = 1; i <= n; i++)
// {
//     s += ((double)1 / (2.0 * i));
// }
// cout << fixed << setprecision(2) << s;
