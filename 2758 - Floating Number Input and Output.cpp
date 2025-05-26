#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;
    cout << "A = " << fixed << a << ", B = " << fixed << b << endl;
    cout << "C = " << fixed << c << ", D = " << fixed << d << endl;
    cout << "A = " << setprecision(1) << a << ", B = " << setprecision(1) << b << endl;
    cout << "C = " << setprecision(1) << c << ", D = " << setprecision(1) << d << endl;
    cout << "A = " << setprecision(2) << a << ", B = " << setprecision(2) << b << endl;
    cout << "C = " << setprecision(2) << c << ", D = " << setprecision(2) << d << endl;
    cout << "A = " << setprecision(3) << a << ", B = " << setprecision(3) << b << endl;
    cout << "C = " << setprecision(3) << c << ", D = " << setprecision(3) << d << endl;
    cout << "A = " << scientific << uppercase << setprecision(3) << a << ", B = " << setprecision(3) << b << endl;
    cout << "C = " << setprecision(3) << c << ", D = " << setprecision(3) << d << endl;
    cout << fixed;
    cout << "A = " << setprecision(0) << a << ", B = " << setprecision(0) << b << endl;
    cout << "C = " << setprecision(0) << c << ", D = " << setprecision(0) << d << endl;
    return 0;
}
