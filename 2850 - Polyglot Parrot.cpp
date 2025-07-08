#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (s=="direita")
            cout << "frances" << endl;
        else if (s=="esquerda")
            cout << "ingles" << endl;
        else if (s=="nenhuma")
            cout << "portugues" << endl;
        else if (s=="as duas")
            cout << "caiu" << endl;
        fflush(stdin);
    }
    return 0;
}
