#include <iostream>
#include <vector>
#include <utility>

#define ull unsigned long long

using namespace std;

int  main()
{
    ull int n, x, i=0, total=0, attack=0, visit=0;
    char c;
    cin >> n;

    vector < pair< ull int,ull int> > v;

    while (n--)
    {
        cin >> x ;
        total+=x;
        v.push_back(make_pair(x, 0));
    }

    while(i>=0 && i<v.size())
    {
        if (v[i].first==0)
        {
            if (v[i].second==0)
            {
                attack++;
                v[i].second=1;
            }
            break;
        }
        else if (v[i].first%2==0)
        {
            if (v[i].second==0)
            {
                attack++;
                v[i].second=1;
            }

            visit++;
            v[i].first--;
            i--;
        }
        else if (v[i].first%2!=0)
        {
            if (v[i].second==0)
            {
                attack++;
                v[i].second=1;
            }

            visit++;
            v[i].first--;
            i++;
        }
        else
            break;
    }

    cout << attack << " " << total-visit << endl;

    return 0;
}
