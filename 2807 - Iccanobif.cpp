#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, a=1, b=1, c=1;
    cin >> n;
    if (n<3)
    {
        if (n==1)
            cout << 1 << endl;
        else
            cout << 1 << " " << 1 << endl;
        return 0;
    }
    else
    {
        stack<int>s;
        s.push(1);
        s.push(1);
        for (int i=2; i<n; ++i)
        {
            c=a+b;
            a=b;
            b=c;
            s.push(c);
        }
        while (!s.empty())
        {
            cout << s.top();
            if (s.size()!=1)
                cout << " ";
            s.pop();
        }
        cout << endl;
        return 0;
    }
}
