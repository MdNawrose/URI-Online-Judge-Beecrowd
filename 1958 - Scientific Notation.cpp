#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a;
    cout.precision(4);
    cout.setf(cout.showpos);
    cout.setf(cout.uppercase);
    cout.setf(cout.scientific);

    cout << a << endl;

    return 0;
}
