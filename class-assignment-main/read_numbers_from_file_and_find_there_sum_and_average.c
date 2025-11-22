#include <stdio.h>

int main() {
    FILE *f;
    int num, count = 0;
    float sum = 0, avg;

    f = fopen("numbers.txt", "r");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(f, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(f);

    avg = sum / count;

    printf("Total numbers read: %d\n", count);
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
