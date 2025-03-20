#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    struct exp
    {
        int x;
        int y;
        int z;
    };
    while (cin >> t)
    {
        vector<exp>v(t);
        for (int i=0; i<t; ++i)
        {
            scanf("%d %d=%d", &v[i].x, &v[i].y, &v[i].z);
        }
        int a, b, c;
        vector<string>str;
        for (int i=0; i<t; ++i)
        {
            string n;
            int e, addition, subtraction, multiplication;
            char r;
            cin >> n >> e >> r;
            a=v[e-1].x;
            b=v[e-1].y;
            addition=a+b;
            subtraction=a-b;
            multiplication=a*b;
            if (r=='I')
            {
                if (v[e-1].z==addition || v[e-1].z==subtraction || v[e-1].z==multiplication)
                    str.push_back(n);
            }
            else
            {
                if (r=='+')
                    c=addition;
                else if (r=='-')
                    c=subtraction;
                else if (r=='*')
                    c=multiplication;
                if (c!=v[e-1].z)
                    str.push_back(n);
            }
        }
        if (str.size()==t)
            cout << "None Shall Pass!" << endl;
        else if (str.size()==0)
            cout << "You Shall All Pass!" << endl;
        else
        {
            sort(str.begin(), str.end());
            for (int i=0; i<str.size(); ++i)
            {
                cout << str[i];
                if (i==str.size()-1)
                    cout << endl;
                else
                    cout << " ";
            }
        }
    }

    return 0;
}
