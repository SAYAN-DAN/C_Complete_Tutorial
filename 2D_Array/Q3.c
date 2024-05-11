// SOME THING WRONG IN THIS CODE 

// // Write a program to store roll number and marks obtained by 4 students side by side in a matrix..
// #include<stdio.h>
// int main() {
//     int student,rows,column;
//     printf("Enter the student number: ");
//     scanf("%d", &student);
//     for (int i = 0; i <=student; i++){
//         printf("Enter the rows: ");
//         scanf("%d",&rows);        
//         // printf("Enter the column: ");
//         // scanf("%d",&column);        
//         int arr[rows][3];
//         for (int j = 0; j < rows; j++){
//             for (int k = 0; k < 3; k++){
//                 scanf("%d",&arr[j][k]);
//             }
//             printf("\n");            
//         }
//         for (int j = 0; j < rows; j++){
//             for (int k = 0; k < 3; k++){
//                 printf("%d",arr[j][k]);
//             }
//             printf("\n");            
//         }
//     }
//      return 0;            
// }


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
