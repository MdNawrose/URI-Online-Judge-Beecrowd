#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<double>v(n);
        double m;
        for (int i=0; i<n; ++i)
        {
            cin >> v[i];
            if (i==0)
                m=v[i];
            else
            {
                if (v[i]<m)
                    m=v[i];
            }
        }
        cout << m << endl;
    }

    return 0;
}
