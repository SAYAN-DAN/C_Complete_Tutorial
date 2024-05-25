#include <stdio.h>
int main() {

    int x = 15;
    int Y =  x != 15;
   int  z = x = 20;
    int w =  x < 30;
    printf("\n%d %d %d",Y,z,w);
    return 0;
}
// THIS CODE GIVES US ERROR ⬆️



#include <stdio.h>
int main() {

    int x = 15;
    int Y =  x != 15; // Y=x = 0
   int  z = x = 20; // z=x= 20
    int w =  x < 30; // w= 1
    printf("\n%d %d %d",Y,z,w);
    return 0;
}
// THIS CODE GIVES US WRITE ANSWER ⬆️