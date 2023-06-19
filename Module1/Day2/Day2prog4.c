
#include <stdio.h>

void main()
{
int i,j,n,sum =0;
printf("Enter the no of array elements\n");
int a[n];
scanf("%d",&n);

printf("Enter the array elements\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(j=0;j<n;j++)
{
int ele = a[j];
int count = 0;
while(ele > 0)
{
count = count + (ele & 1);
ele >>= 1;
}
sum += count;
}
printf("%d",sum);
}