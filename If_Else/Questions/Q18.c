// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include <stdio.h>

int main() {
    double x1 = 3.0, y1 = 2.0;
    double x2 = 3.0, y2 = 4.0;
    double x3 = 5.0, y3 = 6.0;
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2){
        printf("all the three points fall on one straight line");
    }
    else{
        printf("all the three points not fall on one straight line");
    }
     // printf("m1: %lf\n", m1);
    // printf("m2: %lf\n", m2);

    return 0;
}
