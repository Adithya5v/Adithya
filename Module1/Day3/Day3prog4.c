#include <stdio.h>

void digits(int n)
{
	int largest = 0;
	int smallest = 9;

	while (n != 0)
	{
		int r = n % 10;

		// Find the largest digit
		if (r > largest)
			largest = r;

		// Find the smallest digit
		if (r < smallest)
			smallest = r;

		n = n / 10;
	}
	printf("%d %d\n", largest, smallest);
}


int main()
{
int n,i,j;
printf("Enter the no of digits\n");
scanf("%d",&n);
int a[n];

printf("Enter the digits\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(j=0;j<n;j++)
{
digits(a[j]);
}

return 0;
}
