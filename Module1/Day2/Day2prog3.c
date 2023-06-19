#include <stdio.h>

void main()
{
int i,j,n,sum =0;
printf("Enter the no of elements in the array\n");
scanf("%d",&n);
int a[n];
printf("Enter the array elements\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(j=0;j<n;j+=2)
{
sum += a[j];
}

printf("%d",sum);
}
