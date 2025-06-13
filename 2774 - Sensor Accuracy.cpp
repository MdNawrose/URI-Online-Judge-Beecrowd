#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h, m;
    while (cin >> h >> m)
    {
        vector<double>v, s;
        double d, sa, sum=0.0, mean, qt=0.0, del;
        cin >> ws;
        while ((cin.peek()!='\n') && (cin>>d))
        {
            v.push_back(d);
            sum+=d;
        }
        mean=sum/(double)v.size();
        for (int i=0; i<v.size(); ++i)
        {
            sa=v[i]-mean;
            qt+=pow(sa, 2);
        }
        del=qt/(v.size()-1);

        del=sqrt(del);
        cout << fixed << setprecision(5) << del << endl;
    }

    return 0;
}
