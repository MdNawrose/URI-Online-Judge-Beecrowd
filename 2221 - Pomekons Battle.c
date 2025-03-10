#include <stdio.h>

int main()
{
    int tst, Dab, Gab, a1, a2, d1, d2, l1, l2, bns;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d", &bns);
        scanf("%d %d %d", &a1, &d1, &l1);
        scanf("%d %d %d", &a2, &d2, &l2);
        Dab = (a1+d1)/2;
        if(l1%2==0) Dab += bns;
        Gab = (a2+d2)/2;
        if(l2%2==0) Gab += bns;
        if(Dab == Gab) printf("Empate\n");
        else printf((Dab > Gab)? "Dabriel\n" : "Guarte\n");
    }
    return 0;
}
