#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int searchArray(struct Student array[], int size, const char* targetName) {
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].name, targetName) == 0) {
            return i;  // Found the matching name at index i
        }
    }

    return -1;  // Name not found in the array
}


int main() {
int size = 3;
char searchName[20];

    struct Student students[size];


    for(int i=0;i<size;i++)
    {
    scanf("%s",students[i].name);
    scanf("%d",&students[i].marks);
    }


    scanf("%s",searchName);
    int searchIndex = searchArray(students, size, searchName);

    if (searchIndex != -1) {
        printf("Name: %s, Marks: %d\n", students[searchIndex].name, students[searchIndex].marks);
    } else {
        printf("Name not found in the array.\n");
    }

    return 0;
}