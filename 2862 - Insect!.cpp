#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i=0; i<n; ++i)
    {
        int x;
        cin >> x;
        if (x<=8000)
            cout << "Inseto!" << endl;
        else
            cout << "Mais de 8000!" << endl;
    }

    return 0;
}
