#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// abs : trị tuyệt đối
// pow(a,b) : a^b : tra về số double
// sqrt(a): căn bậc 2 của a
// round(a): làm tròn số
int main()
{
    // int x = -10, z = 4;
    // float a = -3.5324134242423424;
    // int y = abs(x);
    // cout << y << endl;
    // double res = pow(x, z);
    // cout << res << endl;
    // float can = sqrt(z);
    // cout << can << endl;
    // int b = round(a);
    // cout << b << endl;

    // int n;
    // cin >> n;
    //     if ((n > 0) && (n <= 100))
    //     {
    //         cout << "adu vip\n ";
    //     }
    //     else
    //     {
    //         cout << "ga \n";
    //     }

    // int m;
    // cin >> m;
    // if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 9) || (m == 11))
    // {
    //     cout << "thang le !\n ";
    // }
    // else if ((m == 2) || (m == 4) || (m == 6) || (m == 8) || (m == 10) || (m == 12))
    // {
    //     cout << "thang chan! \n";
    // }
    // else
    // {
    //     cout << " data doesn't exist \n";
    // }

    int j;
    cin >> j;
    switch (j)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        cout << " thang le !\n";
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        cout << "thang chan !\n";
        break;
    default:
        cout << "data doesn't exist \n";
    }
    return 0;
}

// 0: false
// #0: true