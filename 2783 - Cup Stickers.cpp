#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, c, m, s=0;
    cin >> n >> c >> m;
    vector<int>v(c), v1(m);
    for (int i=0; i<c; ++i)
        cin >> v[i];
    for (int i=0; i<m; ++i)
        cin >> v1[i];

    for (int i=0; i<c; ++i)
    {
        vector<int>::iterator it;
        it=find(v1.begin(), v1.end(), v[i]);
        if (it==v1.end())
            s++;
    }
    cout << s << endl;
    return 0;
}
