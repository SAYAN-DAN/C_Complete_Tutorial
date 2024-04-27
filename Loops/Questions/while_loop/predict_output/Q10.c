#include <stdio.h>
int main()
{
    int x =4,y =0,z;
    while (x >= 0)
    {
        x--;       // x= 3,2,1,0,-1
        y++;      // y =1,2,3,4,5
        if (x == y)
        {
            continue;
        }
        else{
            printf("\n%d %d" , x,y);
        }
        
    }
    
    return 0;
}