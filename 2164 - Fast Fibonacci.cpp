#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double n, x, y, z;

    cin >> n;

    x=pow(((1+sqrt(5))/2), n);
    y=pow(((1-sqrt(5))/2), n);

    z=(x-y)/sqrt(5);

    cout.setf(cout.showpoint);
    cout << fixed << setprecision(1) << z << endl;

    return 0;
}
