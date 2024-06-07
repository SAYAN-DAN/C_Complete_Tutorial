

#include<stdio.h>

int main() {
    int student, rows, column;

    printf("Enter the number of students: ");
    scanf("%d", &student);

    for (int i = 0; i < student; i++) {
        printf("Enter the number of rows for student %d: ", i+1);
        scanf("%d", &rows);

        int arr[rows][3]; // Assuming each student has 3 columns for roll number, marks, and marks obtained

        // Input roll number and marks obtained for each student
        printf("Enter roll number and marks obtained for student %d:\n", i+1);
        for (int j = 0; j < rows; j++) {
            printf("Enter roll number and marks separated by space for row %d: ", j+1);
            for (int k = 0; k < 3; k++) {
                scanf("%d", &arr[j][k]);
            }
        }

        // Display the matrix for student i
        printf("Matrix for student %d:\n", i+1);
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", arr[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
