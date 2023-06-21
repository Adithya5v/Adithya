#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void initializeArray(struct Student array[], int size) {
    for (int i = 0; i < size; i++) {
   
	scanf("%s",array[i].name);
	scanf("%d",&array[i].marks);
	}  
}

int main() {
int size = 3;
    struct Student stu[size];

    // Initialize the array
    initializeArray(stu, size);

    // Test printing the initialized values
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", stu[i].name, stu[i].marks);
    }

    return 0;
}