#include<stdio.h>
#include<math.h>
int main()
{
char name[20];
scanf("%s",&name);
double salary, profit,total;
scanf("%lf%lf",&salary,&profit);
total=(((15.00/100)*(profit))+salary);
printf("TOTAL = R$ %.2lf\n",total);
return 0;
}
