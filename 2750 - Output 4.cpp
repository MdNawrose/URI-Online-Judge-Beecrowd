#include <iostream>
#include <string>

using namespace std;

int main()
{
    string d="decimal", o="octal", h="Hexadecimal";
    for (int i=0; i<39; ++i)
        cout << "-";
    cout << endl;
    for (int i=0; i<39; ++i)
    {
        if (i==0 || i==12 || i==22 || i==38)
            cout << "|";
        else if (i>=3 && i<=2+d.size())
        {
            if (i==3)
                cout << d;
        }
        else if (i>=15 && i<=14+o.size())
        {
            if (i==15)
                cout << o;
        }
        else if (i>=25 && i<=24+h.size())
        {
            if (i==25)
                cout << h;
        }
        else
            cout << " ";
    }
    cout << endl;
    for (int i=0; i<39; ++i)
        cout << "-";
    cout << endl;
    for (int i=0; i<16; ++i)
    {
        for (int j=0; j<39; ++j)
        {
            if (i>=0 && i<=7)
            {
                if (j==0 || j==12 || j==22 || j==38)
                    cout << "|";
                else if (j==7 || j==17 || j==30)
                    cout << i;
                else
                    cout << " ";
            }
            if (i==8 || i==9)
            {
                if (j==0 || j==12 || j==22 || j==38)
                    cout << "|";
                else if (j==7 || j==30)
                    cout << i;
                else if (j==16 || j==17)
                {
                    if (j==16)
                        cout << i+2;
                }
                else
                    cout << " ";
            }
            if (i>=10 && i<=15)
            {
                if (j==0 || j==12 || j==22 || j==38)
                    cout << "|";
                else if (j==30)
                    cout << (char)(i+55);
                else if (j==6 || j==7)
                {
                    if (j==6)
                        cout << i;
                }
                else if (j==16 || j==17)
                {
                    if (j==16)
                        cout << i+2;
                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    for (int i=0; i<39; ++i)
        cout << "-";
    cout << endl;

    return 0;
}
