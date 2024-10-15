
#include <stdio.h>
#include <math.h>

int main() {
    double fahr, celsius;
    double start, end, step;

    printf("Enter starting Fahrenheit value: ");
    scanf("%lf", &start);
    printf("Enter ending Fahrenheit value: ");
    scanf("%lf", &end);
    printf("Enter increment step: ");
    scanf("%lf", &step);

    printf("\nFahrenheit to Celsius Table\n");
    printf("----------------------------\n");
    printf("Fahrenheit | Celsius\n");
    printf("----------------------------\n");

    for (fahr = start; fahr <= end; fahr += step) {
        celsius = (fahr - 32) * 5.0 / 9.0;
        celsius = round(celsius * 100) / 100;  // Round to 2 decimal places
        printf("%10.2f  | %7.2f\n", fahr, celsius);
    }

    return 0;
}
