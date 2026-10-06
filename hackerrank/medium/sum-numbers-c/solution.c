#include <stdio.h>

int main() {
    int num1_int, num2_int;
    float num1_float, num2_float;

    // Read integer inputs
    scanf("%d %d", &num1_int, &num2_int);
    
    // Read float inputs
    scanf("%f %f", &num1_float, &num2_float);

    // Calculate and print sum and difference for integers
    printf("%d %d\n", num1_int + num2_int, num1_int - num2_int);

    // Calculate and print sum and difference for floats (formatted to 1 decimal place)
    printf("%.1f %.1f\n", num1_float + num2_float, num1_float - num2_float);

    return 0;
}
