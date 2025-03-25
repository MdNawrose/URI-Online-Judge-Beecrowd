#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m;
    while (cin >> m)
    {
        int n, c, csum=0, ncsum=0;
        for (int i=0; i<m; ++i)
        {
            cin >> n >> c;
            csum+=c;
            ncsum+=(n*c);
        }
        double x=(double)ncsum/(double)(csum*100);
        cout << fixed << setprecision(4) << x << endl;
    }

    return 0;
}
