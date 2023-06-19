#include <stdio.h>

void main()
{
int n,i,j,k;
printf("Enter the number\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{

if((n-i+1) < j)
{
printf(" ");
continue;
}
printf("%d",j);
}
for(k=n;k>=1;k--)
{
    if((n-i+1) < k)
    {
        printf(" ");
        continue;
    }
printf("%d",k);
}
printf("\n");
}
}
