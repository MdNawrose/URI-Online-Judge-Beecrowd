#include <iostream>

using namespace std;

int main()
{
    for (int j=0; j<7; ++j)
    {
        if (j==0 || j==6)
        {
            for (int i=0; i<39; ++i)
            cout << "-";
        }

        if (j==2 || j==4)
        {
            for (int i=0; i<39; ++i)
            {
                if (i==0 || i==38)
                    cout << "|";
                else
                    cout << " ";
            }
        }

        if (j==1)
        {
            for (int i=0; i<39; ++i)
            {
                if (i==0 || i==38)
                    cout << "|";
                else if (i>=9 && i<=15)
                {
                    switch (i)
                    {
                    case 9:
                        cout << "R";
                        break;
                    case 10:
                        cout << "o";
                        break;
                    case 11:
                        cout << "b";
                        break;
                    case 12:
                        cout << "e";
                        break;
                    case 13:
                        cout << "r";
                        break;
                    case 14:
                        cout << "t";
                        break;
                    case 15:
                        cout << "o";
                        break;
                    }
                }
                else
                    cout << " ";
            }
        }
        if (j==3)
        {
            for (int i=0; i<39; ++i)
            {
                if (i==0 || i==38)
                    cout << "|";
                else if (i>=9 && i<=12)
                {
                    switch (i)
                    {
                    case 9:
                        cout << "5";
                        break;
                    case 10:
                        cout << "7";
                        break;
                    case 11:
                        cout << "8";
                        break;
                    case 12:
                        cout << "6";
                        break;
                    }
                }
                else
                    cout << " ";
            }
        }

        if (j==5)
        {
            for (int i=0; i<39; ++i)
            {
                if (i==0 || i==38)
                    cout << "|";
                else if (i>=9 && i<=14)
                {
                    switch (i)
                    {
                    case 9:
                        cout << "U";
                        break;
                    case 10:
                        cout << "N";
                        break;
                    case 11:
                        cout << "I";
                        break;
                    case 12:
                        cout << "F";
                        break;
                    case 13:
                        cout << "E";
                        break;
                    case 14:
                        cout << "I";
                        break;
                    }
                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
