#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x, in, de;
    cin >> n;
    vector<int>a;
    for (int i=0; i<n; ++i)
    {
        cin >> m;
        vector<int>v;
        for (int j=0; j<m; ++j)
        {
            cin >> x;
            if (x%2!=0)
                v.push_back(x);
        }
        sort(v.begin(), v.end());
        in=0;
        de=v.size()-1;
        for (int i=0; i<v.size(); ++i)
        {
            if (i%2==0)
                cout << v[de--];
            else
                cout << v[in++];
            if (i!=v.size()-1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
