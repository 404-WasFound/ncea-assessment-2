#include <stdio.h>

int main() {

    int age;
    char[] name = "";

    char[] string = "Enter your name (string) and age (int):\n";

    scanf("%s %i", &name, &age);

    printf("Name: %s \nAge: %i", name, age);

    char* str = malloc(6);
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';

    printf(str);

    free(str);

    return 0;

}