#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, a, b, x;
    cin >> t;
    vector<int>v(t);
    for (int i=0; i<t; ++i)
    {
        cin >> a >> b;
        x=a/b;
        x+=a%b;
        cout << x << endl;
    }
    return 0;
}
