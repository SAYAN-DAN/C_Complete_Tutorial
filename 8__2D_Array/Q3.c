
// Enter roll number for student 1: 1
// Enter marks obtained by student 1: 99
// Enter roll number for student 2: 2
// Enter marks obtained by student 2: 98
// Enter roll number for student 3: 3
// Enter marks obtained by student 3: 97
// Enter roll number for student 4: 4
// Enter marks obtained by student 4: 95

// Roll Number and Marks:
// Roll Number     Marks
// 1               99
// 2               98
// 3               97
// 4               95
#include <stdio.h>
int main() {
    // Define the matrix to store roll numbers and marks
    int students[4][2];
    
    // Input data for 4 students
    for (int i = 0; i < 4; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i][0]);  // Roll number
        
        printf("Enter marks obtained by student %d: ", i + 1);
        scanf("%d", &students[i][1]);  // Marks
    }
    
    // Print the stored data
    printf("\nRoll Number and Marks:\n");
    printf("Roll Number\tMarks\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t\t%d\n", students[i][0], students[i][1]);
    }
    
    return 0;
}

