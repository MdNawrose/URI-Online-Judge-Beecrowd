#include <iostream>

using namespace std;

int main()
{
    int x, y, m;
    while (cin >> x >> y >> m)
    {
        int a, b;
        for (int i=0; i<m; ++i)
        {
            cin >> a >> b;
            if ((a<=x && b<=y) || (a<=y && b<=x))
                cout << "Sim" << endl;
            else
                cout << "Nao" << endl;
        }
    }
    return 0;
}
