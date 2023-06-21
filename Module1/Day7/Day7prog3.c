#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void sortArray(struct Student array[], int size) {
    struct Student temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j].marks < array[j + 1].marks) {
                // Swap the elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
int size = 3;
    struct Student students[size];


    for(int i=0;i<size;i++)
    {
    scanf("%s",students[i].name);
    scanf("%d",&students[i].marks);
    }


       sortArray(students, size);

    // Test printing the sorted array
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}