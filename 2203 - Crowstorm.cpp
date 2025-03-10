#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2, v, r1, r2, a, b, c, ans;

    while (cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2)
    {
        a=pow((x2-x1), 2);
        b=pow((y2-y1), 2);
        c=sqrt(a+b);

        if (((r1+r2)>=(c+(1.5*v))))
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
