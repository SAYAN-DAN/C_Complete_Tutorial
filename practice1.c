


#include<stdio.h>
int main() {
    int arr[8] ={1,2,3,4,5,6,7,8};
    int x = 12;
    int totalpairs = 0;
    for (int i = 0; i <=7; i++){
        for (int j = i+1; j <=7; j++){
            if (arr[i] + arr[j] == x){
                totalpairs++;
                printf("(%d %d)\n", arr[i], arr[j]);
            }            
        }        
    }
    printf("%d", totalpairs);
    return 0;    
}












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


