#include <iostream>

using namespace std;

int main()
{
    int r1, r2, a, b, x, y;
    char c1, c2;
    cin >> c1 >> r1 >> c2 >> r2;
    a=(int)c1-97;
    b=(int)c2-97;
    r1--;
    r2--;
    int arr[8][8]={0};
    x=r1-2;
    y=a+1;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1-2;
    y=a-1;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1+2;
    y=a+1;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1+2;
    y=a-1;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1+1;
    y=a+2;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1-1;
    y=a+2;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1+1;
    y=a-2;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;
    x=r1-1;
    y=a-2;
    if ((x>=0 && x<=7) && (y>=0 && y<=7))
        arr[x][y]=1;

    if (arr[r2][b])
        cout << "VALIDO" << endl;
    else
        cout << "INVALIDO" << endl;

    return 0;
}
