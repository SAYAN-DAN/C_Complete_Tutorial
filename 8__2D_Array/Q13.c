// Write a program to print the transpose of the matrix entered by the user...(Leetcode-867)


// #include<stdio.h>
// int main() {
//     int r;
//     printf("Enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("Enter the number of columns: ");
//     scanf("%d",&c);
//     int arr[r][c];
//     for (int i = 0; i < r ; i++){
//         for (int j = 0; j < c; j++){
//             scanf("%d", &arr[i][j]);
//         }
//         }
//     for (int i = 0; i < c ; i++){
//         for (int j = 0; j < r; j++){
//             printf("%d", arr[j][i]);
//         }
//         printf("\n");
//         }

//         return 0;    
// }




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
        }
        int brr[c][r];
    for (int i = 0; i < c ; i++){
        for (int j = 0; j < r; j++){
            // printf("%d", arr[j][i]);
            brr[i][j] = arr[j][i];
        }
        printf("\n");
        }

    for (int i = 0; i < c ; i++){
        for (int j = 0; j < r; j++){
            // printf("%d", arr[j][i]);
            printf("%d  ",brr[i][j]);
        }
        printf("\n");
        }    
        return 0;    
}

