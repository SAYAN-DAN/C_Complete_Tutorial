#include <stdio.h>
int main()
{
    int x =4,y =0,z;
    while (x >= 0){       
        if (x == y){
            break;
        }
        else{
            printf("\n%d %d" , x,y);
             x--;  // x = 3,2
             y++;  // y = 1,2
        }        
    }
    
    return 0;
}

// x = 4,3,2
// y = 0,1,2