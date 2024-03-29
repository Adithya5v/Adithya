#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    
    // Read Roll No
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    
  
    // Read Name
    printf("Enter Name: ");
    scanf("%s",name);
    
    // Read Marks of Physics
    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);
    
    // Read Marks of Math
    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);
    
    // Read Marks of Chemistry
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);
    
    // Calculate total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;
    
    // Print the summary
    printf("\n--- Student Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);
    
    return 0;
}