#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string str;
    while (cin >> n)
    {
        getline(cin, str);
        while (n--)
        {
            getline(cin, str);
            bool flag=true;
            int s=0, d=0, x;
            char c;
            for (int j=0; j<str.size(); ++j)
            {
                if (str[j]==' ')
                {
                    s++;
                    flag=false;
                }
                if (flag)
                    d++;
            }
            x=(3*s)+(d-1);
            c=x+'a';
            printf("%c\n", c);
        }
    }
    return 0;
}
