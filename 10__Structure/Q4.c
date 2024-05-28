// Create a structure type 'person' with name, salary and age as its attributes.Declare and initialize 2 variables for this. print the name of first person and age of the other.

#include<stdio.h>
#include<string.h>
int main() {
    struct person {
    char name[50];
    int salary;
    int age;
};
    struct person person1,person2;

      strcpy(person1.name, "Alice");
      person1.salary = 50000;
      person1.age = 35;

      strcpy(person2.name, "Rahim Dey");
      person2.salary = 70000;
      person2.age = 40;

      // Print the name of the first person
    printf("Name of the first person: %s\n", person1.name);
    printf("Age of the first person: %d\n", person1.age);

    // Print the age of the second person
    printf("Age of the second person: %d\n", person2.age);
    printf("Salary of the second person: %d\n", person2.salary);

    return 0;
}