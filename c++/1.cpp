#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // int bankinh;
    // cout << bankinh << endl;
    // cout << "hello, I;'m new here, CPP" << endl;

    // int a = 100, b = 200, c = 300;             // khai bao va gan gia tri cho 3 bien
    // cout << a << " " << b << " " << c << endl; // in gia tri ra man hinh

    int a, b;
    // cin >> a >> b >> c; // thay vi phai viet 3 dong cin
    cin >> a >> b;
    cout << a << " " << b << " " << endl;

    long long c;
    cin >> c;
    cout << c << endl;

    float d;
    cin >> d;
    cout << fixed << setprecision(3) << d << endl;

    double e;
    cin >> e;
    cout << fixed << setprecision(14) << e << endl;

    /*thay vi ghi int a;
                  int b;
                  int c;
    */
    return 0;
}

// kieu du lieu int, long long, float, double, char, bool
// n bit => -2^(n-1) to 2^(n-1) - 1
// so nguyen

// int : 4byte= 32bit : -2^31 -> 2^31 - 1
// long long : 8 byte : -2^63 -> 2^63 - 1

// so thuc

// float : 4byte
// double : 8byte
// char : 1byte :0 -< 255
// bool : true false
// cin: nhap
// cout: in
/*
YogurtTheMaverick
*/

// a-z : 97 -122
// A-Z : 65 - 90
// 0-9 : 48 - 57
