#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int>v(4);
    for (int i=0; i<4; ++i)
    {
        cin >> v[i];
        if (v[i]==1)
            x=i+1;
    }

    cout << x << endl;
    return 0;
}
