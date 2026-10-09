#include <iostream>
using namespace std;

// assignment operatior : toán tử gán
// toán tử toán học : =,-,*,/,%
// ++ : tăng lên 1 đơn vị
// toán tử so sánh : >, >= , <, <=, ==, !=
// toan_hang1 toantusosanh toan_hang2 => tra ve true/false
// toán tử logic : AND : &&, OR : ||, NOT : !

int main()
{
    // int a, b, c;
    // cin >> a;
    // b = a;
    // cout << b << endl;
    // c = b;
    // cout << c << endl;

    // int a = 310, b = 60;
    // int tong = a + b;
    // int hieu = a - b;
    // int tich = a * b;
    // int thuong = a / b;
    // float thuongthuc = (float)a / b; // hoac thay bang 1.0 *a/b
    // int du = a % b;
    // cout << tong << " " << hieu << " " << tich << " " << thuong << " " << thuongthuc << " " << du << endl;

    int c = 100;
    int d = c--;
    int f = ++c;
    cout << c << " " << d << " " << f << endl;

    int g = 100, h = 150;

    g %= h;

    cout << g << endl;

    // int a1 = 100, b1 = 200;
    // bool dc = a1 > b1;
    // int res = a1 == b1;
    // cout << dc << endl;

    return 0;
}