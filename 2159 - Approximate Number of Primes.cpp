#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n, x, y, z;

    cin >> n;

    x=n/log(n);
    y=1.25506*x;

    cout.setf(cout.showpoint);
    cout << fixed << setprecision(1) << x << " " << fixed << setprecision(1) << y << endl;

    return 0;
}
