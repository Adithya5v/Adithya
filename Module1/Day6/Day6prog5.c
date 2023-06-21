#include <stdio.h>
#include <string.h>

// Define the structure for student data
struct Student {
    char name[50];
    int age;
};

// Function to swap the fields of two structures using pointers
void swapStudents(struct Student *s1, struct Student *s2) {
    // Swap the name field
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap the age field
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;
}

int main() {
    // Create two student structures
    struct Student student1 = {"Alice", 20};
    struct Student student2 = {"Bob", 22};

    printf("Before swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    // Call the swapStudents function to swap the fields
    swapStudents(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    return 0;
}