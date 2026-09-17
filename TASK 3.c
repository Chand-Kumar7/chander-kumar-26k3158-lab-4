#include <stdio.h>

int main() {
    char name[50];

    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);

    puts("Student name is:");
    puts(name);

    return 0;
}