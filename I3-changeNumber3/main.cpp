#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool condition1 = false,
         condition2 = false;
    if (a <= b && b <= c) {
        a = a * a;
        b = b * b;
        c = c * c;
        condition1 = true;
    }
    if (a > b && b > c) {
        b = a;
        c = a;
        condition2 = true;
    }
    if (!(condition1 || condition2)) {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
