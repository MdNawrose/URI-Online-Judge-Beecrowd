#include <iostream>

using namespace std;

int main()
{
    int l, c, t1, t2;
    cin >> l >> c;
    t1=(l*c)+((l-1)*(c-1));
    t2=((l-1)*2)+((c-1)*2);
    cout << t1 << endl;
    cout << t2 << endl;
    return 0;
}
