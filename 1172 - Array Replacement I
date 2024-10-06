#include<stdio.h>
#include<string.h>

int main() {
    long long int i, j, x = 0, n, p = 0, g = -1;
    char a[1009];
    
    while (1) {
        g = -1;
        x = 0;
        p = 0;

        scanf("%lld%s", &n, a);

        if (a[0] == '0' && n == 0) {
            break;
        }

        int len = strlen(a);


        for (i = 0; i < len; i++) {
            if ((a[i] - '0') == n) {
                a[i] = '*';
            }
        }

       
        for (i = 0; i < len; i++) {
            if (a[i] != '*') {
                p += (a[i] - '0');
            }
        }

        if (p == 0) {
            printf("0\n");
        } else {
           
            for (i = 0; i < len; i++) {
                if (a[i] != '0' && a[i] != '*') {
                    break;
                }
            }

    
            for (; i < len; i++) {
                if (a[i] != '*') {
                    printf("%c", a[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
