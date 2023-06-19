#include <stdio.h>

int bigger(int a, int b)
{
if(a >= b)
{
return a;
}
return b;
}

void main()
{
int a,b,big;
scanf("%d%d",&a,&b);
big = bigger(a,b);
printf("%d",big);
}
