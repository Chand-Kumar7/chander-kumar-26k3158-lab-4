#include <stdio.h>

int main() {
    int lateDays;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays == 0) {
        printf("No Fine\n");
    }
    else {
        if (lateDays <= 5) {
            printf("Fine: Rs. 50\n");
        }
        else {
            if (lateDays <= 10) {
                printf("Fine: Rs. 100\n");
            }
            else {
                printf("Fine: Rs. 200\n");
            }
        }
    }

    return 0;
}