#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    int c, n;
    while (cin >> c >> n)
    {
        vector<pair<char,char> >v(c);
        string s1, s2, str;
        cin >> ws;
        getline(cin, s1);
        cin >> ws;
        getline(cin, s2);

        for (int i=0; i<c; ++i)
        {
            v[i].first=s1[i];
            v[i].second=s2[i];
        }

        for (int i=0; i<n; ++i)
        {
            string build;
            cin >> ws;
            getline(cin, str);
            for (int j=0; j<str.size(); ++j)
            {
                char c, s, r;
                c=str[j];
                r=c;
                if (isalpha(c))
                {
                    if (islower(c))
                        s=toupper(c);
                    else
                        s=c;
                    for (int i=0; i<v.size(); ++i)
                    {
                        if (v[i].first==s)
                        {
                            r=v[i].second;
                            break;
                        }
                        else if (v[i].second==s)
                        {
                            r=v[i].first;
                            break;
                        }
                    }
                    if (islower(str[j]))
                        tolower(r);
                    else if (isupper(str[j]))
                        toupper(r);
                }

                else
                {
                    for (int i=0; i<v.size(); ++i)
                    {
                        if (v[i].first==c)
                        {
                            r=v[i].second;
                            break;
                        }
                        else if (v[i].second==c)
                        {
                            r=v[i].first;
                            break;
                        }
                    }
                    tolower(r);
                }
                if (isalpha(r))
                    r=tolower(r);
                build.push_back(r);
            }

            for (int j=0; j<build.size(); ++j)
            {
                char ch;
                if (isupper(str[j]))
                {
                    ch=toupper(build[j]);
                    cout << ch;
                }
                else
                    cout << build[j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
