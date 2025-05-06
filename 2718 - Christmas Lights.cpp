#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>

using namespace std;

#define ull unsigned long long

int main()
{
    ull int n, x, rem;
    cin >> n;
    for (ull int i=0; i<n; ++i)
    {
        cin >> x;
        string s=bitset<64>(x).to_string();
        s.push_back('0');
        vector<ull int>v;
        vector<ull int>::iterator it;
        ull int k=0;
        for (ull int j=0; j<s.size()-1; ++j)
        {
            k++;
            if (s[j]=='1' && s[j+1]=='0')
                v.push_back(k);
            if (s[j]=='0' && s[j+1]=='1')
                k=0;
        }
        it=max_element(v.begin(), v.end());
        if (it==v.end())
            cout << 0 << endl;
        else
            cout << *it << endl;
    }

    return 0;
}
