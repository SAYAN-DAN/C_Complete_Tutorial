#include<stdio.h>
#include<string.h>
int main() {
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        int tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].attack = 80;
    arr[0].speed = 50;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Sayan Dan");
    arr[1].attack = 90;
    arr[1].speed = 60;
    arr[1].speed = 150;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"Sayan Dan");

    arr[2].attack = 60;
    arr[2].speed = 50;
    arr[2].speed = 120;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"Sayan Dan");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i].attack);
        printf("%d\n", arr[i].hp);
        printf("%d\n", arr[i].speed);
        printf("%c\n", arr[i].tier);
        printf("%s\n", arr[i].name);
    }
    
}