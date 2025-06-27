#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, h=0, w=0, a=0, b=0;
    cin >> n;
    string s1, s2;
    for (int i=0; i<n; ++i)
    {
        cin >> ws >> s1 >> s2;
        if (s1=="chuva")
        {
            if (h==0)
            {
                a++;
                h++;
            }
            w++;
            h--;
        }
        if (s2=="chuva")
        {
            if (w==0)
            {
                b++;
                w++;
            }
            h++;
            w--;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
