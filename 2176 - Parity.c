#include <stdio.h>
#include <string.h>
int main()
{
    char str[150];
    int i, cnt=0;
    scanf("%s", str);
    for(i=0; str[i]; i++)
        if(str[i]=='1')
            cnt++;
    if(cnt%2 == 0)
        str[i] = '0';
    else
        str[i] = '1';
    str[i+1] = '\0';
    printf("%s\n", str);
    return 0;
}
