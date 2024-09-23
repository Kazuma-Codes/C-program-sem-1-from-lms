/*If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks and 
percentage marks obtained by the student. Assume that the maximum marks 
that can be obtained by a student in each subject is 100.*/
#include <stdio.h>

int main() {
    int marks[5];
    int i;
    int totalMarks = 0;
    float percentage;
    
    // Input marks for five subjects
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);
        
        // Adding marks to total
        totalMarks += marks[i];
    }

    // Calculating percentage
    percentage = (totalMarks / 500.0) * 100;  // Maximum marks = 5 subjects * 100

    // Output aggregate marks and percentage
    printf("\nAggregate Marks: %d\n", totalMarks);      //aggregate marks = total
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
