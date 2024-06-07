
// Enter the number of rows: 3
// Enter the number of columns: 3
// 1 2 3

// 4 5 6

// 7 8 9


// 1  2  3  
// 4  5  6  
// 7  8  9  
#include<stdio.h>
int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");        
        }
        printf("\n");        
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
        }
        return 0;    
}

// #include<stdio.h>

// int main() {
//     int r, c;

//     // Input number of rows
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);

//     // Input number of columns
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);

//     // Declare the 2D array
//     int arr[r][c];

//     // Input elements of the array
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             printf("Enter element at position (%d,%d): ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Print the array
//     printf("The entered array is:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
