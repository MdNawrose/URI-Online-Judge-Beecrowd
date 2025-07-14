#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double t, n, m, x;
    cin >> t;
    for (int i=0; i<t; ++i)
    {
        cin >> n >> m;
        x=pow(n, m);
        x=m*log10(n)+1;
        cout << floor(x) << endl;
    }

    return 0;
}
