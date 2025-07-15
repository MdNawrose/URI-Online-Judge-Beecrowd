#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c=0;
    cin >> n;
    vector<int>v(n);
    for (int i=0; i<n; ++i)
    {
        cin >> v[i];
        if (v[i]!=1)
            c++;
    }
    cout << c << endl;
    return 0;
}
