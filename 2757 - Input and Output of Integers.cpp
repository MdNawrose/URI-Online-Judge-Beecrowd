#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
        printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
        printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
        printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    }
    return 0;
}
