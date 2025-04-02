#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        double v=0;
        vector<int>l;
        for (int i=0; i<n; ++i)
        {
            int t, d;
            cin >> t >> d;
            double w;
            w=(double)d/(double)t;
            if (w>v)
            {
                l.push_back(i+1);
                v=w;
            }
        }
        for (int i=0; i<l.size(); ++i)
            cout << l[i] << endl;
    }

    return 0;
}
