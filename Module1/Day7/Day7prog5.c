#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void displayArray(struct Student array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", array[i].name, array[i].marks);
    }
}

int main() {
int size = 3;
    struct Student stu[size];
    
    for(int i=0;i<size;i++)
    {
    scanf("%s",stu[i].name);
    scanf("%d",&stu[i].marks);
    }

    
    // Display all members in the array
    displayArray(stu, size);

    return 0;
}