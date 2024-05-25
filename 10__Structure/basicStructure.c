#include<stdio.h>
int main() {
    struct pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    printf("%d", pikachu.attack);

    struct pokemon charizard;
    charizard.attack = 80;
    charizard.hp = 50;
    charizard.speed = 100;
    charizard.tier = 'S';

    struct pokemon mewtwo;
    mewtwo.attack = 90;
    mewtwo.hp = 90;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';
}