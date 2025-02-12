#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n1, n2;
    int i=1, x, y, z, c;

    while (cin >> n1 >> n2)
    {
        z=0;
        if (n2.rfind(n1)!=n2.npos)
            c=0;
        else
            c=-1;

        x=n2.rfind(n1)+1;

        while (1)
        {
            y=n2.find(n1, z);
            if (y==n2.npos)
                break;
            z=y+1;
            c++;
        }

        cout << "Caso #" << i << ":" << endl;
        if (c==-1)
            cout << "Nao existe subsequencia" << endl;
        else
        {
            cout << "Qtd.Subsequencias: " << c << endl;
            cout << "Pos: " << x << endl;
        }

        cout << endl;
        i++;
    }

    return 0;
}
