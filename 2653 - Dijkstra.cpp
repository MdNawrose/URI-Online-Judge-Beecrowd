#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    string::iterator it;
    set<string>ss;
    bool flag=true;;
    int length=0;

    while (getline(cin, s) && flag)
    {
        length+=s.size();
        if (length>1000000)
            flag=false;
        ss.insert(s);
    }
    cout << ss.size() << endl;
    return 0;
}
