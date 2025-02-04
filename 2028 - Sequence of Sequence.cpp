#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, a, b, c, i=1;

    while (cin>>n)
    {
        x=((n*(n+1))/2)+1;
        cout << "Caso " << i << ": " << x;

        if (x==1)
        {
            cout << " numero" << endl;
            cout << 0 << endl;
            cout << endl;
            i++;
            continue;
        }
        else
        {
            cout << " numeros" << endl;
            cout << 0 << " ";
            for (int i=0; i<=n; ++i)
            {
                for (int j=0; j<i; ++j)
                    if (i==n && j==i-1)
                        cout << i << endl;
                    else
                        cout << i << " ";
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}
