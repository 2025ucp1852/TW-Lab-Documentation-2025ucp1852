
/**
 * @file 01-basic-functions.cpp
 * @brief Demonstrates basic functions with Doxygen documentation.
 * @author Vikram Mehra
 * @date 2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Calculates the square of an integer.
 * @param n Input integer.
 * @return Square of the input integer.
 */
int square(int n) {
    return n * n;
}

/**
 * @brief Main function of the program.
 * @return 0 when the program executes successfully.
 */
int main() {
    int x = 5;
    int y = 3;

    cout << "First number: " << x << endl;
    cout << "Second number: " << y << endl;
    cout << "Sum: " << add(x, y) << endl;
    cout << "Square of first number: " << square(x) << endl;

    return 0;
}
