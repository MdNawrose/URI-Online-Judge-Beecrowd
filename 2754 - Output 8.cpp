#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double v1=234.345, v2=45.698;
    cout << fixed << v1 << " - " << v2 << endl;
    cout << setprecision(0) << v1 << " - " << v2 << endl;
    cout << setprecision(1) << v1 << " - " << v2 << endl;
    cout << setprecision(2) << v1 << " - " << v2 << endl;
    cout << setprecision(3) << v1 << " - " << v2 << endl;
    cout << scientific << setprecision(6) << v1 << " - " << v2 << endl;
    cout << scientific << uppercase << setprecision(6) << v1 << " - " << v2 << endl;
    cout.unsetf(ios::scientific);
    cout << v1 << " - " << v2 << endl;
    cout << v1 << " - " << v2 << endl;
    return 0;
}
