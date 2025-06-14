#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    set<int>s;

    for (int i=0; i<m; ++i)
    {
        cin >> x;
        s.insert(x);
    }

    cout << n-s.size() << endl;

    return 0;
}
