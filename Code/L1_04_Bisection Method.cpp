#include <iostream>
#include <cmath>

double func(double x) {
    return x * x * x - 9 * x + 1;
}

double bisection(double a, double b, double epsilon) {
    double c;

    while ((b - a) >= epsilon) {
        c = (a + b) / 2.0;

        if (func(c) == 0.0)
            break;

        if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = -10; // Lower bound of the interval
    double b = 10;  // Upper bound of the interval
    double epsilon = 0.001; // Tolerance

    double root = bisection(a, b, epsilon);

    // Print the root correct to 3 decimal places
    //std::cout << "Root of the equation x^3 � 9x + 1 = 0: " << std::fixed << std::setprecision(3) << root << std::endl;
    printf("Root of the equation x^3 - 9x + 1 = 0: %.3lf\n", root);

    return 0;
}
