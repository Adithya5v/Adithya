#include <stdio.h>
#include <stdlib.h>

// Define the structure for student data
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of student structures
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Read data for each student
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Display the stored data for each student
    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}