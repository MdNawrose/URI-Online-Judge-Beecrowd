#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, c=0;
    cin >> n;
    vector<int>v(n);
    vector<int>s;
    for (int i=0; i<n; ++i)
    {
        cin >> v[i];
        if (i>0)
        {
            x=v[i-1]-v[i];
            s.push_back(x);
        }
    }
    if (n<3)
        cout << 1 << endl;
    else
    {
        for (int i=0; i<s.size(); ++i)
        {
            if (i==s.size()-1)
                c++;
            else
            {
                if (s[i]!=s[i+1])
                    c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
