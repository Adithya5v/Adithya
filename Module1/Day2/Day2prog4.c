
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



// or


#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int main() {
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}

