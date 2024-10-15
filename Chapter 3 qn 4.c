#include <stdio.h>

int main() {
    float pounds, kilograms;
    float start, end, step;

    printf("Enter starting Pounds value: ");
    scanf("%f", &start);
    printf("Enter ending Pounds value: ");
    scanf("%f", &end);
    printf("Enter increment step: ");
    scanf("%f", &step);

    printf("\nPounds to Kilograms Table\n");
    printf("----------------------------\n");
    printf(" Pounds  | Kilograms\n");
    printf("----------------------------\n");

    for (pounds = start; pounds <= end; pounds += step) {
        kilograms = pounds * 0.453592;
        printf("%8.1f | %9.3f\n", pounds, kilograms);}

    float miles, kilometers;

    printf("Enter starting Miles value: ");
    scanf("%f", &start);
    printf("Enter ending Miles value: ");
    scanf("%f", &end);
    printf("Enter increment step: ");
    scanf("%f", &step);

    printf("\nMiles to Kilometers Table\n");
    printf("----------------------------\n");
    printf("  Miles  | Kilometers\n");
    printf("----------------------------\n");

    for (miles = start; miles <= end; miles += step) {
        kilometers = miles * 1.60934;
        printf("%8.1f | %10.3f\n", miles, kilometers);}

    return 0;
}
