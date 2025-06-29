#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define ull unsigned long long

bool isperfect(ull int x)
{
    ull int s=sqrt(x);
    return s*s==x;
}

bool isfibonacci(ull int n)
{
    return isperfect(5*n*n+4) || isperfect(5*n*n-4);
}

int main()
{
    ull int k, n;
    cin >> k;
    vector<ull int>v;
    for (int i=0; i<200000; ++i)
    {
        if (!isfibonacci(i+1))
            v.push_back(i+1);
        if (v.size()==k)
            break;
    }

    cout << v[v.size()-1] << endl;

    return 0;
}
